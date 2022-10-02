#include <iostream>
#include "vector"

#include "problem_1_to_10/#2_add_two_numbers/Solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> num1 = {2, 6, 5};
    vector<int> num2 = {4, 6};

    ListNode *l1 = nullptr, *l2 = nullptr;
    ListNode *tempNode = nullptr;
    for (int i = 0; i < num1.size(); i++) {
        struct ListNode *newNode = (ListNode*) malloc(sizeof(ListNode));
        newNode->val = num1[i];

        if (tempNode != nullptr)
            tempNode->next = newNode;

        if (l1 == nullptr) {
            l1 = newNode;
        }

        tempNode = newNode;
    }

    tempNode = nullptr;
    for (int i = 0; i < num2.size(); i++) {
        struct ListNode *newNode = (ListNode*) malloc(sizeof(ListNode));
        newNode->val = num2[i];

        if (tempNode != nullptr)
            tempNode->next = newNode;

        if (l2 == nullptr) {
            l2 = newNode;
        }

        tempNode = newNode;
    }

    ListNode *resultNode = solution.addTwoNumbers(l1, l2);
    ListNode *next = resultNode;
    while (next != nullptr){
        cout << next->val << endl;
        next = next->next;
    }

    return 0;
}
