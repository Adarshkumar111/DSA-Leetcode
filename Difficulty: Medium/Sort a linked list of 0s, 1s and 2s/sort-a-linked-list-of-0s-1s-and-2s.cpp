/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* temp=head;
        int cntZ=0;
        int cntO=0;
        int cntT=0;
        
        while(temp!=NULL){
            if(temp->data==0) cntZ++;
            else if(temp->data==1) cntO++;
            else cntT++;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(cntZ){
                temp->data=0;
                cntZ--;
            }
            else if(cntO){
                temp->data=1;
                cntO--;
            }
            else{
                temp->data=2;
                cntT--;
            }
            temp=temp->next;
        }
        return head;
    }
};