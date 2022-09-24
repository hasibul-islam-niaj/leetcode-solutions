#include "Algos.h"
#include "algorithm"

using namespace std;

 vector<int> Algos::searchLessThanOrEqualAndSort(vector<int> data, int search) {
    vector<int> sortedData;

    for (const auto &item: data) {
        if (item <= search)
            sortedData.push_back(item);
    }

    sort(sortedData.begin(), sortedData.end());
    return sortedData;
}
