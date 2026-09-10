class Solution {
public:
    long long countCommas(long long n) {
        if (n < 1000) return 0;

        long long x = 1, y = 1000, comma = 0;
        long long multiplier = 0;

        for (;;) {
            if (n >= x && n < y) {
                return (n - x + 1) * multiplier + comma;
            } else {
                comma += (y - x) * multiplier;  // half-open range [x, y): count is y - x
                multiplier++;
                x *= 1000;
                y *= 1000;
            }
        }
    }
};