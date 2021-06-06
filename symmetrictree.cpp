class Solution {
public:
    void left_trav(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)
        {
            v.push_back(-1);
            return;
        }
        v.push_back(root->val);
        left_trav(root->left,v);
        left_trav(root->right,v);
    }
    void right_trav(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)
        {
            v.push_back(-1);
            return;
        }
        v.push_back(root->val);
        right_trav(root->right,v);
        right_trav(root->left,v);
        
    }
    
    bool isSymmetric(TreeNode* root) {
        vector<int>left,right;
        left_trav(root,left);
        right_trav(root,right);
       
        if(left.size()!=right.size())
            return false;
        else{
        if(left==right)
            return true;
        else
            return false;
        }
    }
};
