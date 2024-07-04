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
    ListNode* mergeNodes(ListNode* head) {
        if (!head or !head->next)
            return nullptr;
        // ListNode* dummy = new ListNode(0);
        // ListNode* ptr = dummy;
        // ListNode* current = head;
        // current = current->next;
        // int sum = 0;
        // while(current){
        //     if(current->val==0){
        //         ListNode* new_Node = new ListNode(sum);
        //         ptr->next = new_Node;
        //         ptr=ptr->next;
        //         sum = 0;
        //     }
        //     sum+=current->val;
        //     current = current->next;
        // }
        // return dummy->next;

        //optimization of code;

        ListNode* current = head;
        ListNode* zero = head;
        ListNode* zero_head = zero;
        current = current->next;
        int sum = 0;
        while(current){
            if(current->val==0){
                zero->val = sum;
                sum = 0;
                if( current->next==NULL ){
                    zero->next=NULL;
                    break;
                }
                zero->next = current;
                zero=zero->next;
                current=current->next;
            }
            else{
            sum+=current->val;
            current=current->next;
            }
        }

        return zero_head;
        
    }
};