class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        stack<TreeNode*> s;
        vector<int> v;
        while(1)
        {
            while(root)
            {
                s.push(root);
                root = root->left;
            }
        
            if(s.empty())
            {
            return  v;
            }
            
            root = s.top();a
            s.pop();
            
            v.push_back(root->val);
            
            root = root->right;
        }
        return v;
        
    }
};
