// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         vector<int> index;
//         vector<int> res;
//         if (!head || !head->next || !head->next->next) {
//             return {-1, -1};
//         }
//         ListNode *current = head->next;
//         ListNode* prev = head;
//         ListNode* nextNode = current->next;
//         int i = 1;
//         while(current->next){
//             if((current->val<prev->val && current->val<nextNode->val)||(current->val>prev->val && current->val>nextNode->val)){
//                 index.push_back(i);
//                 i++;
//             }
//             prev = prev->next;
//             current = current->next;
//             if(current->next == NULL){
//                 nextNode = nextNode->next;

//             }
           

//         }

//         int maxDiff = index[index.size()-1]-index[0];
//         int minDiff = index[1]-index[0];
//         for(int i=2;i<index.size();i++){
//             if(minDiff<index[i]-index[i-1]){
//                 minDiff = index[i]-index[i-1];
//             }
//         }

//         res = {minDiff,maxDiff};

//         return res;

        
//     }
// };

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> index;
        vector<int> res;
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }

        ListNode* prev = head;
        ListNode* current = head->next;
        ListNode* nextNode = current->next;
        int i = 1;

        while (nextNode) {
            if ((current->val < prev->val && current->val < nextNode->val) ||
                (current->val > prev->val && current->val > nextNode->val)) {
                index.push_back(i);
            }
            prev = current;
            current = nextNode;
            nextNode = nextNode->next;
            i++;
        }

        if (index.size() < 2) {
            return {-1, -1};
        }

        int maxDiff = index.back() - index.front();
        int minDiff = INT_MAX;

        for (int i = 1; i < index.size(); i++) {
            minDiff = min(minDiff, index[i] - index[i - 1]);
        }

        res = {minDiff, maxDiff};
        return res;
    }
};
