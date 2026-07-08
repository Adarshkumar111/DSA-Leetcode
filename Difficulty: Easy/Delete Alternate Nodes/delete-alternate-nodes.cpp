/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        Node* currNode=head;
        while(currNode!=NULL and currNode->next!=NULL){
            Node* temp=currNode->next;
            currNode->next=currNode->next->next;
            delete temp;
            currNode=currNode->next;
        }
        return ;
    }
};