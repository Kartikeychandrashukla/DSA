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
    ListNode* middleNode(ListNode* head) {
        int counter=0;
ListNode* curr=head;
        while(curr)
        {
            curr=curr->next;
            counter++;
        }
int middle=0;
        if((counter&1)==1)
        {
middle=(counter+1)/2;
        }
        else
        {
            middle=(counter/2)+1;
        }
int c=1;

while(head!=nullptr)
{
        if(c==middle)
    {
        return head;
    }
    head=head->next;
    c++;
   
}

return nullptr;

    }
};