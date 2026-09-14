/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *ptr,*ptr2;
        ptr=head;
        ptr2=head;
        while(ptr2!=nullptr&&ptr2->next!=nullptr){
            ptr=ptr->next;
            ptr2=ptr2->next->next;
            if(ptr==ptr2){
                return true;
            }
        }
        return false;
    }
};