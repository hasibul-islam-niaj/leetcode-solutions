#include <iostream>
#include "vector"

#include "problem_1_to_10/#1_two_sum/Solution.h"

using namespace std;

int main() {
    vector<int> data = {3, 2, 4};
    int target = 6;
    vector<int> results = Solution::twoSum(data, target);

    for (const auto &item: results)
        cout << item << endl;

    return 0;
}
