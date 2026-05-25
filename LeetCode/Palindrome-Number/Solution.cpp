1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if (x < 0) {
5            return false;
6        }
7        if (x != 0 && x % 10 == 0) {
8            return false;
9        }
10        int reverse = 0;
11        int temp = x;
12        while (temp > reverse) {
13            int pop = temp % 10;
14            reverse = reverse * 10 + pop;
15            temp /= 10;
16        }
17        return (temp == reverse) || (temp == reverse / 10);
18    }
19};
20