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
    void order(TreeNode *root,vector<int>&v)
    {
        if(root==NULL) return;
        v.push_back(root->val);
        order(root->left,v);
        order(root->right,v);
    }
    bool checkTree(TreeNode* root) {
        vector<int>v;
        order(root,v);
        int sum=0;
        for(auto it:v)
        {
            //cout<<it<<" ";
            sum=v[1]+v[2];
        }
        if(v[0]==sum) return true;
        else return false;
    }
};