// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

#include <bits/stdc++.h>
using namespace std;

struct Compare {
    bool operator()(ListNode* a, ListNode* b) const {
        if (a->val != b->val) return a->val > b->val;
        return a > b;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        for (ListNode* node : lists) {
            if (node) pq.push(node);
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (!pq.empty()) {
            ListNode* cur = pq.top();
            pq.pop();

            tail->next = cur;
            tail = tail->next;

            if (cur->next) {
                pq.push(cur->next);
            }
        }

        return dummy.next;
    }
};