// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

#include <bits/stdc++.h>
using namespace std;

// Helper to compare ListNode pointers in the priority_queue
struct Compare {
    bool operator()(ListNode* a, ListNode* b) const {
        // min-heap: smaller value has higher priority
        if (a->val != b->val) return a->val > b->val;
        // If values are equal, use the pointer address to ensure a strict weak ordering
        return a > b;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Priority queue (min-heap) holding ListNode pointers
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        // Initialize heap with the head of each non-empty list
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