#include "iostream"

class Solution {
public:
    long mySqrt(long x) { // NOLINT(*-convert-member-functions-to-static)
        if (x < 2)
            return x;

        long left = 1, mid = 0, right = x / 2;
        while (left <= right) {
            mid = (left + right) / 2;

            if (mid * mid <= x) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return  right;
    }
};

int main() {
    Solution solution;
    for (int i = 536848900; i < 999999999; i++)
        std::cout << "SQRT of " << i << ": " << solution.mySqrt(i) << std::endl;

    return 0;
}