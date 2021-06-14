class Solution {
public:
   vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string>vec;
        if(n==0)
        {
            return vec;
        }
        int pre=nums[0],num=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==num+1)
            {
                num++;continue;
            }
            if(pre==num)
            {
                vec.push_back(to_string(num));
            }
            else 
            {
                vec.push_back(to_string(pre)+"->"+to_string(num));
            }
            pre=num=nums[i];
        }
        if(pre==num)
        {
            vec.push_back(to_string(num));
        }
        else 
        {
            vec.push_back(to_string(pre)+"->"+to_string(num));
        } 
        return vec;
    }
};