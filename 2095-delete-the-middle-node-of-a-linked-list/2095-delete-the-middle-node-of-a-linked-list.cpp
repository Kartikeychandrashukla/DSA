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
    ListNode* deleteMiddle(ListNode* head) {
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
ListNode* prev=nullptr;
curr=head;

while(curr!=nullptr)
{
        if(c==middle)
    {
        if(prev==nullptr)
        {
            return nullptr;
        }
       break;
    }
prev=curr;
    curr=curr->next;
    c++;
   
}

 prev->next=curr->next;
       delete curr;
return head;

    }
};