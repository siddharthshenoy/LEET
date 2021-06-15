class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n);
        vector<int> numsMissing;
        
        for(int i=0;i<n;i++)
        {
            a[nums[i]-1]= nums[i];
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==0)
            {
                numsMissing.push_back(i+1);
            }
        }
        return numsMissing;
    }
};