class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int smallestIndex = -1;
        for (int i = 0; i < nums.size(); i++) {
            int number = nums[i], sumOfDigits = 0;
            while (number > 0) {
                int digit = number % 10;
                sumOfDigits += digit;
                number = number / 10;
            }
            if (sumOfDigits == (i) && (smallestIndex == -1 || smallestIndex > i)) {
                smallestIndex = i;
            }
        }

        return smallestIndex;
    }
};