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
    ListNode* sortList(ListNode* head) {
        vector<int>vec;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            vec.push_back(curr->val);
            curr=curr->next;
        }
        sort(vec.begin(),vec.end());
        int n=vec.size();
        if(n==0 || n==1)
            return head;
        ListNode* m=new ListNode(vec[0]);
        ListNode* node=m;
        for(int i=1;i<n;i++)
        {
            node->next=new ListNode(vec[i]);
            node=node->next;
        }
        return m;
    }
};