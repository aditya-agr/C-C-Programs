#include<iostream>
#include<conio.h>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr || q==nullptr)
            return p==q;
        else
            return ((p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
     bool isSymmetric(TreeNode* p) {
        if (!p) 
            return true;
        else
            return isSameTree(p->left, p->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p || !q)
            return p==q;
        else
            return ((p->val == q->val) && isSameTree(p->left, q->right) && isSameTree(p->right, q->left));
    }

int search(int in[], int st, int ed, int val){
    for(int i=st; i<=ed; i++){
        if(val == in[i])
            return i;
    }
    return -1;
}

Node* buildTree(int pre[], int in[], int st, int ed){
    static int idx;
    if(st>ed)
        return NULL;
    int curr = pre[idx];
    Node* root = new Node(curr);
    idx++;
    if(st == ed)
        return root;
    int pos = search(in, st, ed, curr);
    root->left = buildTree(pre, in, st, pos-1);
    root->right = buildTree(pre, in, pos+1, ed);
    return root;
}

void preOrder(Node* root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    /*     5
          / \
         4   3
        /   / \
       2   1   6 
    */
    int preorder[] = {5,4,2,3,1,6};
    int inorder[] = {2,4,5,1,3,6};
    Node * node = buildTree(preorder, inorder, 0, 5);
    preOrder(node);
    getch();
    return 0;
}