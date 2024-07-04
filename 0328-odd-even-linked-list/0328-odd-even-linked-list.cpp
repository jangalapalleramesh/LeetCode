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
    ListNode* oddEvenList(ListNode* head) {

        ListNode* odd_dummy = new ListNode(0);
        ListNode* even_dummy = new ListNode(0);
        ListNode* odd_current = odd_dummy;
        ListNode* even_current = even_dummy;
        ListNode* current = head;
        int index = 0;

        while(current){

            if(index%2){
                odd_current->next = current;
                odd_current = odd_current->next;

            }
            else{
                even_current->next = current;
                even_current = even_current->next;
            }
            current = current->next;
            index++;
        }
        odd_current->next = nullptr;
        even_current->next = odd_dummy->next;
        ListNode* new_head = even_dummy->next;

        return new_head;
        
    }
};