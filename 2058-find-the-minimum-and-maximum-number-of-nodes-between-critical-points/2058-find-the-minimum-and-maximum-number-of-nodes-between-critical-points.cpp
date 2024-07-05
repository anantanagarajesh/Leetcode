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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=head;
        int i=1;
        vector<int>ans;
        curr=curr->next;
        while(curr->next!=NULL){
            if(curr->val<prev->val && curr->val<(curr->next->val) || curr->val>prev->val && curr->val>(curr->next->val))
                ans.push_back(i);
            prev=curr;
            curr=curr->next;
            i++;
        }
        if (ans.size() < 2) {
            return {-1, -1};
        }
        int maxi=ans.back()-ans.front(),mini=INT_MAX;
        for(int i=1;i<ans.size();i++){
            mini=min(mini,ans[i]-ans[i-1]);
        }
    
        return {mini,maxi};
    }
};