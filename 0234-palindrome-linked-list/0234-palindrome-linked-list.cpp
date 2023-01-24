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
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
            
        ListNode* res=NULL;
        ListNode* temp;
        while(slow){
            temp=slow->next;
            slow->next=res;
            res=slow;
            slow=temp;
        }
        
        slow=head;
        fast=res;
        
        while(fast){
            if(fast->val != slow->val){
                return false;
            }
            fast=fast->next;
            slow=slow->next;
        }
        return true;
    }
};