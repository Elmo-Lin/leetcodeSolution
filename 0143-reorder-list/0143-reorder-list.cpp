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
    void reorderList(ListNode* head) {
        if(!head || !head->next){
            return;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow->next;
        slow->next=nullptr;
        
        ListNode* l2=nullptr;
        ListNode* temp;
        while(mid){
            temp=mid->next;
            mid->next=l2;
            l2=mid;
            mid=temp;
        }
    
        while(head && l2){
            ListNode* next=head->next;
            head->next=l2;
            l2=l2->next;
            head->next->next=next;
            head=next;
        }
        
    }
};