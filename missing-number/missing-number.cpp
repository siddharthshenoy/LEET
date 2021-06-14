class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int var=0,i;
        for(i=0;i<=nums.size()-1;i++){
            var=var^i;
            var=var^nums[i];
        }
        return var^nums.size();
    }
};