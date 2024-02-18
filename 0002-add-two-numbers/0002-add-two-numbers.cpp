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
    
    ListNode* reverseList(ListNode* head) {
    if (!head || !head->next)
      return head;

    ListNode* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
  }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *d = new ListNode(0);
        ListNode *c = d;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry==1)
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum=sum+l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode *node = new ListNode(sum % 10);
            c->next=node;
            c=c->next;
        }
        return d->next;
    }
};