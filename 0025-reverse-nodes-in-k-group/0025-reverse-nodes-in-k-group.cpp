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
    ListNode* reverse(ListNode* head, int k){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nextNode = nullptr;
        while(curr!=nullptr&& k>0){
            nextNode = curr->next; 
            curr->next = prev;     
            prev = curr;           
            curr = nextNode;
            k--;
        }
        head->next=curr;
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || k==1 ) return head;
        ListNode* temp = head;
        for (int i = 0; i < k; i++) {
            if (temp == nullptr)
                return head;
            temp = temp->next;
        }
        ListNode* newHead = reverse(head, k);
        head->next = reverseKGroup(head->next, k);
        return newHead;
    }
};