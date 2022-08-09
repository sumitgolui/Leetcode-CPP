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
    void maker(TreeNode * root, vector<int> &v){
        
        if(root==NULL){
            return;
        }
        
        maker(root->left,v);
        v.push_back(root->val);
        maker(root->right,v);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> v1;
        maker(root,v1);
        return v1;
        
        
    }
};