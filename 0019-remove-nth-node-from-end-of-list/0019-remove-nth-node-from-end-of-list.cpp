/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr=head;
        int k=0;
        while(ptr!=nullptr){
            ptr=ptr->next;
            k++;
        }
        if(k==n){
            return head->next;
        }
        ptr=head;
        for(int i=1;i<k-n;i++){
            ptr=ptr->next;
        }
        ListNode* temp=ptr->next;
        if(temp){
            ptr->next=temp->next;
        }
        delete(temp);
        return head;
    }
};