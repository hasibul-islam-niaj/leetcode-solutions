//
// Created by hasibul on 10/2/22.
//

#ifndef LEETCODE_PROBLEMS_SOLUTION_H
#define LEETCODE_PROBLEMS_SOLUTION_H

#include "iostream"

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x): val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    ListNode* getNewNode(int data);
};


#endif //LEETCODE_PROBLEMS_SOLUTION_H
