
class Solution {
    public:
        bool isPalindrome(int x) {
        int org=x;
        if(org<0)
            return false;
        long long int rev=0;
        while(x)
        {
            rev=rev*10+x%10;
            x=x/10;
            
        }
        return rev==org;
        }
    };
