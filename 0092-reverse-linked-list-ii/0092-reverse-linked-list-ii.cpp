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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        int counter=1;
ListNode *curr=head;
ListNode* last=nullptr;
        while(counter!=left)
        {
            last=curr;
            curr=curr->next;
            counter++;
        }
ListNode* h=curr;
      ListNode*  prev=nullptr;
        while(counter!=(right+1))
        {
            ListNode* nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
            counter++;
        }
     if (last != nullptr) {
            last->next = prev;
        } else {
            head = prev;  // left == 1
        }
        h->next=curr;
       return head;
    }
};