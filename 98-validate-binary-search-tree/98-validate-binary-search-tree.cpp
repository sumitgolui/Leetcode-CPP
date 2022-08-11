/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void inorder(TreeNode* p,vector<int>& v1){
        if(p==NULL){
            return;
        }
        inorder(p->left,v1);
        v1.push_back(p->val);
        inorder(p->right,v1);
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> v,v2;
        int count=0;
        if(root==NULL){
            return true;
        }
        inorder(root,v);
        
        for(int i=0;i<v.size()-1;i++){
            if(v[i]<v[i+1])
            count++;
        }
       if(count==v.size()-1){
           return true;
       }
        return false;
        
        
    }
};