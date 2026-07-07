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
    ListNode* reverseList(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head;

        ListNode* prev = nullptr, *temp=head;
        while(temp!=nullptr){
            ListNode* front = temp->next;
            temp->next = prev;
            prev=temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return true;
        ListNode* slow = head, *fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = reverseList(slow);
        while(newHead!=nullptr){
            if(head->val != newHead->val) return false;

            head = head->next;
            newHead = newHead->next;
        }
        return true;
    }
};