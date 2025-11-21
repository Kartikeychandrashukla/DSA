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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* t= head;
        while(t!=nullptr)
        {
t=t->next;
size++;
        }
        int frontindex=size-(n-1);
        int c=0;
        ListNode *curr=head;
        ListNode * prev=nullptr; 
while(curr!=nullptr)
{ 
    c++;
    if(c==1 && c==frontindex)
    {
        head=head->next;
        break;
    }
    if(c==frontindex)
    {
prev->next=curr->next;
delete(curr);
break;
    }
    prev=curr;
curr=curr->next;

}
return head;
    }
};