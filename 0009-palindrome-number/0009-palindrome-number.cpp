class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        if (x != 0 && x % 10 == 0) {
            return false;
        }
        int reverse = 0;
        int temp = x;
        while (temp > reverse) {
            int pop = temp % 10;
            reverse = reverse * 10 + pop;
            temp /= 10;
        }
        return (temp == reverse) || (temp == reverse / 10);
    }
};
