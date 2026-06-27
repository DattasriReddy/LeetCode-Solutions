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
        // Handle empty list edge cases
        if (!headA || !headB) return nullptr;

        ListNode *ptrA = headA;
        ListNode *ptrB = headB;

        // Loop runs until both pointers point to the same node
        while (ptrA != ptrB) {
            // If ptrA reaches the end, switch to headB; else move to next
            ptrA = (ptrA == nullptr) ? headB : ptrA->next;
            
            // If ptrB reaches the end, switch to headA; else move to next
            ptrB = (ptrB == nullptr) ? headA : ptrB->next;
        }

        // Returns either the intersection node or nullptr if no intersection exists
        return ptrA; 
    }
};
