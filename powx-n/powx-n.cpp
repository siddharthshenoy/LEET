class Solution {
public:
    double myPow(double x, int n) {
        double a =1;
        if(n>=0)
        {
            while(n!=0)
            {
            if ( n&1==1)
            a = a*x;
            x= x*x;
            n= n/2;
            }
        }
        else
        {   while(n!=0)
            {
            if ( n&1==1)
            a = a/x;
            x= x*x;
            n= n/2;
            }
        }
        return a;
    }
};