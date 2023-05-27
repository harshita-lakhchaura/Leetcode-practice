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
        ListNode* z=NULL;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            ListNode* y=curr->next;
            curr->next=z;
            z=curr;
            curr=y;
        }
        return z;
    }
};