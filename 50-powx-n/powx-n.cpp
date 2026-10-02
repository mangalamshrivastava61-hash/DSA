class Solution {
public:
    double myPow(double x, int n) {

        long long biform = n;
        long double base = x;
        long double ans = 1.0;

        if (biform < 0) {
            base = 1.0 / base;
            biform = -biform;
        }

        while (biform > 0) {

            if (biform % 2 == 1) {
                ans *= base;
            }

            base *= base;
            biform /= 2;
        }

        return (double)ans;
    }
};