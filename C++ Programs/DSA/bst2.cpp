#include <bits/stdc++.h>

using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
       TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        trie * root = new trie;
        for(string& word:dictionary)
        {
            trie* curr = root;
            for(int i=0; i<word.length(); i++){
                if(curr->arr[word[i]-'a'] == NULL)
                    curr->arr[word[i]-'a'] = new trie;
                curr =  curr->arr[word[i]-'a'];
            }
            curr->word = word;
        }
        string ans;
        istringstream is(sentence);
        string token;
        while(is>>token){
            trie *curr = root;
            for(char c: token){
                if(curr->arr[c-'a'] == NULL || curr->word != "")
                    break;
                curr = curr->arr[c-'a'];
            }
            if(ans.size() > 0)
                ans += " ";
            ans += (curr->word != "")? curr->word : token;
        }
        return ans;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        int i=0, j=0;
        q.push(root);
        q.push(NULL);
        while(q.empty()){
            TreeNode* t = q.front();
            q.pop();
            if(t == NULL){
                i++;
                j=0;
                continue;
            }
            ans[i].push_back(t->val);
            if(t->left != NULL)
                q.push(t->left);
            if(t->right != NULL)
                q.push(t->right);
        }
    return ans;
    }
};

vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        int i=0, j=0;
        q.push(root);
        q.push(NULL);
        while(q.empty()){
            TreeNode* t = q.front();
            q.pop();
            if(t == NULL){
                i++;
                j=0;
                continue;
            }
            ans[i].push_back(t->val);
            if(t->left != NULL)
                q.push(t->left);
            if(t->right != NULL)
                q.push(t->right);
        }
    return ans;
    }
    
class trie{
public:
    vector<trie*> arr;
    string word;
    trie(){
        arr = vector<trie*>(26, NULL);
        word = "";
    }
};

int main(){
    
}