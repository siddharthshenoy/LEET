class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> b;
        int i =0;
        int n =0;
        nums.push_back(0);
        for(i;i<nums.size();i++)
        {
            if(nums[i]==1)
            {   
                n++;
            }
            else
            {   
                b.push_back(n);
                n=0;
            }
        }
        int c= *max_element(b.begin(),b.end());
        return c;
    }
};