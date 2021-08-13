class Solution {
public:
    int findMin(vector<int>& nums) {
        int a = *min_element(nums.begin(),nums.end());
        binary_search(nums.begin(),nums.end(),a);
        return a;
    }
};