class Solution {
 public:
  int nextNum(int n) {
    int output = 0;
    while (n > 0) {
      int digit = n % 10;
      output += digit * digit;
      n = n / 10;
    }

    return output;
  }

  bool isHappy(int n) {
    int slow = n;
    int fast = nextNum(n);

    while (fast != 1 && slow != fast) {
      slow = nextNum(slow);
      fast = nextNum(nextNum(fast));
    }
    return fast == 1;
  }
};