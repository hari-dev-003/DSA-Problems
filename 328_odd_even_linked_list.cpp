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
        ListNode* oddHead = new ListNode(-1);
        ListNode* evenHead = new ListNode(-1);
        ListNode *oddTail = oddHead, *evenTail = evenHead;

        ListNode* curr = head, *temp;
        int index =1;
        while(curr){
            temp = curr;
            curr = curr->next;
            temp->next = nullptr;

            if(index%2!=0){
                oddTail->next = temp;
                oddTail = temp;
            }
            else{
                evenTail->next = temp;
                evenTail = temp;
            }
            index++;
        }
        oddTail->next = evenHead->next;
        return oddHead->next;
    }
};