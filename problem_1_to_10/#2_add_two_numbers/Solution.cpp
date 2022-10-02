//
// Created by hasibul on 10/2/22.
//

#include "Solution.h"

using namespace std;

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *result = new ListNode(0);
    ListNode *current = result;

    bool hasCarry = false;

    while (l1 || l2) {
        int num1 = l1 ? l1->val : 0;
        int num2 = l2 ? l2->val : 0;

        int sum = num1 + num2;
        sum += hasCarry ? 1 : 0;
        hasCarry = false;

        if (sum > 9) {
            sum -= 10;
            hasCarry = true;
        }

        current->next = new ListNode(sum);
        current = current->next;

        l1 = l1 ? l1->next : nullptr;
        l2 = l2 ? l2->next : nullptr;
    }

    if (hasCarry) {
        current->next = new ListNode(1);
    }

    return result->next;
}