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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        int middle=n/2;
        
        if(n==0)
            return NULL;
        if(n==1)
            return new TreeNode(nums[0]);
        
        TreeNode* root;
        
        root=new TreeNode(nums[middle]);
        
        vector<int> lv(nums.begin(),nums.begin()+middle);
        vector<int> rv(nums.begin()+middle+1,nums.end());
        
        root->left=sortedArrayToBST(lv);
        root->right=sortedArrayToBST(rv);
        
        return root;
    }
};
