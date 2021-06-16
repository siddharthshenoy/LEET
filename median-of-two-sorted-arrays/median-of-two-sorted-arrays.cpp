class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        for(int i=0;i<nums1.size();i++)
        {
            a.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            a.push_back(nums2[i]);
        }
        sort(a.begin(),a.end());
        int b = a.size()/2;
        double c;
        if(a.size()%2==0)
        {
            c =(a[b]+a[b-1]);
            c =c/2.0;
        }
        else
        {  
             c=a[b];
        }

        
        return c;
    }
};