class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        if (cnt == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int res = cnt - n;
        temp = head;

        for (int i = 1; i < res; i++) {
            temp = temp->next;
        }

        ListNode* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;

        return head;
    }
};