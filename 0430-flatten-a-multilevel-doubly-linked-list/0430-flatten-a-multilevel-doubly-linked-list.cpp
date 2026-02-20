/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;

        Node* curr = head;

        while (curr) {
            
           
            if (!curr->child) {
                curr = curr->next;
            } 
            else {
               
                Node* child = curr->child;
                Node* tail = child;
                
                while (tail->next) {
                    tail = tail->next;
                }

                
                tail->next = curr->next;
                if (curr->next) {
                    curr->next->prev = tail;
                }

                
                curr->next = child;
                child->prev = curr;

               
                curr->child = nullptr;

               
                curr = curr->next;
            }
        }

        return head;
    }
};