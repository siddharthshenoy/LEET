class Solution {
public:
    int countPrimes(int n) {
        vector<bool> sieve(n, true);
        for (int i = 2; i <= sqrt(n); ++i) {
            if (sieve[i]) {
                for (int ii = i*i; ii < n; ii += i) {
                    sieve[ii] = false; 
                }
            }
        }
        
        int ans = 0; 
        for (int i = 2; i < n; ++i) 
            if (sieve[i]) ++ans; 
        return ans; 
    }
};