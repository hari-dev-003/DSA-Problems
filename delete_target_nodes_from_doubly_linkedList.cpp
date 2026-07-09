/* a Node of the doubly linked list
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
*/

class Solution {
  public:

    // Function to delete a specified node from the linked list
    Node* deleteAllOccurOfX(Node* head, int x) {

    Node* temp = head;
    while(temp!=nullptr){
        Node * nextNode = temp->next;
        if(temp->data==x){
            // checking if the current node is head or not
            if(temp->prev!=nullptr)
                temp->prev->next= temp->next;
            else
                head = temp->next;
            
            // checking if the current node is tail or not
            if(temp->next!=nullptr){
                temp->next->prev = temp->prev;
            }
            // if tail it is ignored by default
        }
        temp = nextNode;
    }
    return head;
        
    }
};
