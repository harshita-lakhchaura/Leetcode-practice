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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt=0;
        ListNode* temp=head;
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode *prev=dummy,*nex=dummy,*curr=dummy;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        while(cnt>=k)
        {
            curr=prev->next;
            nex=curr->next;
            for(int i=1;i<k;i++)
            {
                curr->next=nex->next;
                nex->next=prev->next;
                prev->next=nex;
                nex=curr->next;
            }
            prev=curr;
            cnt-=k;
        }
        return dummy->next;
    }
};