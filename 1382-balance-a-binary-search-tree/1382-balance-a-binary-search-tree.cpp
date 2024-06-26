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
    vector<int> arr;
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            arr.push_back(root->val);
            inorder(root->right);
        }
    }
    TreeNode* buildTree(TreeNode* root,int left,int right){
        if(left>right)
            return nullptr;
        int mid=left+(right-left)/2;
        TreeNode* node= new TreeNode(arr[mid]);
        
        node->left=buildTree(root,left,mid-1);
        node->right=buildTree(root,mid+1,right);
        return node;
        
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return buildTree(root,0,arr.size()-1);
        
    }
};