#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* slow = NULL;
        ListNode* fast = head;
        while (fast) {
            ListNode *t = fast->next;
            fast->next = slow;
            slow = fast;
            fast = t;
        }
        return slow;
    }
};

int main() {
    return 0;
}