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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy=ListNode(-1, head);          //假頭
        ListNode* curr=&dummy;
        while(curr and curr->next){
            if(curr->next->val==val){
                ListNode* temp=curr->next->next;    //刪除節點前 要先保存到temp
                delete curr->next;                  //避免memory leak
                curr->next=temp;
                
            }else{
                curr=curr->next;
            }
        }
        return dummy.next;
    }
};