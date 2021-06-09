class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==val){
                swap(nums[i],nums[nums.size()-1]);
                nums.pop_back();
                i=-1;
            }
        }
        return nums.size();
    }
};
