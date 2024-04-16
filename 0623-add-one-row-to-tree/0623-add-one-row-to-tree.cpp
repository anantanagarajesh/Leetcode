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
    void dfs(TreeNode* root, int val, int depth, int d){
        if(!root)
            return;
        if(d==depth-1){
            TreeNode* left = root->left ;
            TreeNode *right = root->right; 
            TreeNode* leftNode = new TreeNode(val);
            TreeNode* rightNode = new TreeNode(val);
            leftNode->left=left;
            rightNode->right=right;
            root->left=leftNode;
            root->right=rightNode;
            return;
        }
        dfs(root->left,val,depth,d+1);
        dfs(root->right,val,depth,d+1);
        
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
       if(depth==1){
           TreeNode* newNode = new TreeNode(val);
           newNode->left=root;
           return newNode;
       }
        TreeNode* curr=root;
        dfs(curr,val,depth,1);
        
        return root;
    }
};