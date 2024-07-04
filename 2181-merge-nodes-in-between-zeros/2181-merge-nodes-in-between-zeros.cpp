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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        vector<int>ans;
        int sum=0;
        curr=curr->next;
        while(curr!=NULL){
            if(curr->val==0){
                ans.push_back(sum);
                sum=0;
            }
            else{
                sum+=curr->val;
            }
            curr=curr->next;
        }
        curr=head;
        int k=ans.size(),i=0;
        while(k>0){
            curr->val=ans[i];
            prev=curr;
            curr=curr->next;
            k--;
            i++;
        }
        prev->next=NULL;
        return head;
    }
};