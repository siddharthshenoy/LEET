class Solution {
  public:
    int maxSubArray(vector<int>& nums) {

      int maximum= nums[0];
      int ending = nums[0];
      for (int i = 1; i < nums.size(); i++) {
        ending = max(ending + nums[i], nums[i]);
        maximum = max(maximum, ending);  
      }
  
      return maximum;
    }
};
