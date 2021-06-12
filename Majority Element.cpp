class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj=0;
        int count = 0;
        for(int i:nums)
        {
            if(!count)
            {
                maj=i;
            }
            if(maj==i)
            {
                count++;
            }
            else
            {
                count--;
            }
        
        }
        return maj;
    }
};
