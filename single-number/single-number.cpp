class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int ans;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        unordered_map<int,int> :: iterator itr;
        
        for(itr = mp.begin(); itr!= mp.end(); itr++)
        {
            if(itr->second == 1)
            {
                ans = itr->first;
            }
        }
        return ans;
    }
};