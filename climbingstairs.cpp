class Solution {
public:
    int climbStairs(int n) {
        vector<int>cs(n+1,0);
        cs[0]=1;
        cs[1]=1;
        for(int i=2;i<=n;i++)
        {
            cs[i]=cs[i-1]+cs[i-2];
        }
        return cs[n];
    }
};
