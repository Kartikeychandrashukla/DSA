/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
  unordered_map<ListNode*,int>mp;

  ListNode* curr=head;
  while(curr)
  {
     if(mp.count(curr))
return curr;

mp[curr]=1;
curr=curr->next;

  }
  return nullptr;
  }
};