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
public:
    void inorder(TreeNode* root,vector<int> &v){
        if(root==NULL){
            v.push_back(-1);
            return;
        }
         v.push_back(root->val);
        inorder(root->left,v);
       
        inorder(root->right,v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        vector<int> v1,v2;
        inorder(p,v1);
        inorder(q,v2);
            if(v1==v2){
                return true;
            }
        
        return false;
        
    }
};