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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lena=0;
        int lenb=0;
        ListNode* dummy= headA;
        while(dummy){
            lena++;
            dummy=dummy->next;
        }
        dummy=headB;
        while(dummy){
            lenb++;
            dummy=dummy->next;
        }
        if(lena>lenb){
            swap(headA,headB);
        }
        int diff=abs(lena-lenb);
        while(diff--){
            headB=headB->next;
        }
        while(headA!=nullptr){
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};