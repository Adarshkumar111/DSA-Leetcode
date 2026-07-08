/* Structure for link list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int sumofNodes(Node* head, int n) {
        // Code Here
        Node* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        
        int pos=cnt-n;
        int sum=0;
        // temp=head;
        Node* first=head;
        for(int i=0; i<pos; i++){
            first=first->next;
        }
        
        for(int i=pos; i<cnt; i++){
            sum=sum+first->data;
            first=first->next;
        }
        return sum;
    }
};