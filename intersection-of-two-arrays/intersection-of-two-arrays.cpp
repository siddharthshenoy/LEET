class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        
        for(int i=0 ; i<nums1.size() ; i++)
        {
            for(int j=0 ; j<nums2.size() ; j++)
            {
                if(nums1[i]==nums2[j])
                {
                    a.push_back(nums1[i]);
                }
            }
        }
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        return a;
    }
};