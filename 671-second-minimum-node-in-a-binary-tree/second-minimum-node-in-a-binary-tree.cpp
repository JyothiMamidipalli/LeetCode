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
    void inorder(TreeNode *root, vector<int>&v)
    {
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        set<int>s(v.begin(),v.end());
        // for(int i=0;i<v.size();i++)
        // {
        //     s.insert(v[i]);
        // }

        vector<int>v1;
        for(auto it:s)
        {
            v1.push_back(it);
        }
        // for(auto it:v1)
        // {
        //     cout<<it<<" ";
        // }
        if(v1.size()==1) return -1;
        else return v1[1];
    }
};