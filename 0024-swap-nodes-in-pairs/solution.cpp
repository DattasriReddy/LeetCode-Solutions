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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        while (prev->next != NULL && prev->next->next != NULL){
            ListNode* n1=prev->next;
            ListNode* n2=n1->next;
            n1->next=n2->next;
            n2->next=prev->next;
            prev->next=n2;
            prev=n1;
        }
        return dummy->next;

    }
};
