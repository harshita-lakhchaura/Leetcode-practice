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
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* forw=NULL;
        while(curr!=NULL)
        {
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1=reverse(l1);
        ListNode* h2=reverse(l2);
        int carry=0,sum=0;
        ListNode* curr=new ListNode();

        while(h1!=NULL || h2!=NULL)
        {
            if(h1)
            {
                sum+=h1->val;
                h1=h1->next;
            }
            if(h2)
            {
                sum+=h2->val;
                h2=h2->next;
            }
            curr->val=sum%10;
            carry=sum/10;
            ListNode* head=new ListNode(carry);
            head->next=curr;
            curr=head;
            sum=carry;
        }
        return carry==0?curr->next:curr;
    }
};