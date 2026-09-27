
// SOLUTION_#1_TWO_SUM

#include "Solution.h"

vector<int> Solution::twoSum(vector<int> data, int target) {
    map<int, int> dataMap;
    for (int i = 0; i < data.size(); i++) {
        dataMap[data[i]] = i + 1;
    }

    for (int i = 0; i < data.size(); i++) {
        int isFounded = (dataMap[target - data[i]] - 1);
        if (isFounded > -1 && isFounded != i) {
            return vector<int>{i, isFounded};
        }
    }

    return vector<int>{};
}