#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
struct node
{
    int data;
    node *left=NULL, *right=NULL;
};

class bst
{
public:
    node *root;

    bst()
    {
        root = NULL;
    }
    void insert(int num)
    {
        node *tmp = new node();
        tmp->data = num;
        // tmp->left = NULL;
        // tmp->right = NULL;
        if (root == NULL)
            root = tmp;
        else
        {
            node *prev, *t = root;
            while (t != NULL)
            {
                prev = t;
                if (t->data < num)
                    t = t->right;
                else
                    t = t->left;
            }
            if (prev->data < num)
                prev->right = tmp;
            else
                prev->left = tmp;
        }
    }

    void preorder(node *root)
    {
        if (root)
        {
            cout << root->data << " ";
            preorder(root->left);
            preorder(root->right);
        }
        
    }

    void inorder(node *root)
    {
        if (root)
        {
            inorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
        }
    }

    void postorder(node *root)
    {
        if (root)
        {
            postorder(root->left);
            postorder(root->right);
            cout << root->data << " ";
        }

    }

    void traversal()
    {
        cout << "Preorder : ";
        preorder(root);
        cout << "\nInorder : ";
        inorder(root);
        cout << "\nPostorder : ";
        postorder(root);
        cout<<endl;
    }

    void dlt(int num)
    {
        node *prev, *t = root;
        while (t != NULL && t->data != num)
        {
            prev = t;
            if (num < t->data) 
                t = t->left;
            else
                t = t->right;
        }
        if (t == NULL)
            cout << "Element not found\n";
        else if (t->left == NULL && t->right == NULL)
        {
            if (t != root)
            {
                if (prev->left == t)
                    prev->left = NULL;
                else
                    prev->right = NULL;
            }
            else
                root = NULL;
            delete t;
        }
        else if (t->left  && t->right)
        {
            node *tmp = t->right;
            while (tmp->left != NULL)
                tmp = tmp->left;
            int val = tmp->data;
            dlt(val);
            t->data = val;
        }
        else
        {   
            node *tmp = (t->left == NULL) ? t->right : t->left;
            if (t != root)
            {
                if (t == prev->left)
                    prev->left = tmp;
                else
                    prev->right = tmp;
            }
            else
                root = tmp;
        }
    }

    
    bool isbst(){
        return isbsthelper(root, INT16_MIN, INT16_MAX);
    }

    bool isbsthelper(node *t, int min, int max){
        if(t==NULL)
            return true;
        if(t->data<min || t->data>max)
            return false;
        return(isbsthelper(t->right, t->data+1, max) && isbsthelper(t->left, min, t->data-1));
    }

    bool isBST(node *root){
        if(root == NULL)
            return true;
        else{
            static node*prev = NULL;
            if(!isBST(root->left))
                return false;
            if(prev!=NULL && root->data < prev->data)
                return false;
            prev = root;
            return isBST(root->right);
        }
    }
};

int height(node* root){
        if(root == NULL)
            return 0;
        else{
            int lh = height(root->left);
            int rh = height(root->right);
            if(lh>rh)
                return lh+1;
            else
                return rh+1;
        }
    }
vector<vector<int>> levelOrder(node* root) {
        int n = height(root);
        vector<vector<int>> ans(n);
        queue<node*> q;
        int i=0, j=0;
        q.push(root);
        q.push(NULL);
        while(q.empty()){
            node* t = q.front();
            q.pop();
            if(t == NULL){
                cout<<q.size();
                if(q.size())
                    return ans;
                else{
                    q.push(NULL);
                    i++;
                    continue;
                }
            }
            ans[i].push_back(t->data);
            if(t->left != NULL)
                q.push(t->left);
            if(t->right != NULL)
                q.push(t->right);
        }
        return ans;
    }

int main()
{
    bst b1;
    b1.insert(2);
    b1.insert(34);
    b1.insert(26);
    b1.insert(89);
    b1.insert(56);
    vector<vector<int>> ve = levelOrder(b1.root);
    cout<<ve[0][1];
    cout<<ve[1][0];
    cout<<ve[1][1];
    cout<<ve[2][0];
    cout<<ve[3][0];
    // b1.traversal();
    // b1.dlt(23);
    // b1.traversal();
    // b1.dlt(26);
    // b1.traversal();
    // // b1.dlt(36);
    // // b1.traversal();

    getch();
    return 0;
}