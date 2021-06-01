class Solution {
public:
    int reverse(int x) {
        int a = 0;
        while(x != 0){
            int b = x%10;
            x = x/10;
            if(a > INT_MAX/10 or (a == INT_MAX and b > 7))
            {
                return 0;
            }
            if(a < INT_MIN/10 or (a == INT_MIN and b <-8))
            {
                return 0;
            }
            a = a * 10 + b;
        }
        return a;
    }
};
