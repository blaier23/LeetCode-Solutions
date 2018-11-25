//Given a binary tree, return the inorder traversal of its nodes' values.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if(!root)
            return result;
        inorderTraversalHelper(root, result);
        return result;
    }
    
    void inorderTraversalHelper(TreeNode* root, vector<int>& result)
    {
        if(root->left)
            inorderTraversalHelper(root->left,result);
        result.push_back(root->val);
        if(root->right)
            inorderTraversalHelper(root->right,result);
    }
    
    vector<int> iterativeInorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> recursionStack;
        TreeNode* curr = root;
        while(!recursionStack.empty() || curr)
        {
            while(curr)
            {
                recursionStack.push(curr);
                curr = curr->left;  
            }
                curr = recursionStack.top();
            recursionStack.pop();
            result.push_back(curr->val);
            curr = curr->right; 
        }
        return result;
    }
};

