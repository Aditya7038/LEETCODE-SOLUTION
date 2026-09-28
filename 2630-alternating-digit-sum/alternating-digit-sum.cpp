class Solution {
public:
    int alternateDigitSum(int n) {
        int total = 0, sign = 1;
        while (n > 0) {
            total += sign * (n % 10);
            sign = -sign;
            n /= 10;
        }
        // After the loop, sign is -1 if the digit count is odd
        // (leading digit already got +), and +1 if even (leading got -).
        return -sign * total;
    }
};