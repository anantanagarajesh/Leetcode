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
    int GCD(int a,int b){
        if(b==0)
            return a;
        return GCD(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr=head;
        while(curr->next!=NULL){
            int a=curr->val;
            int b=curr->next->val;
            int gcd=GCD(a,b);
            ListNode* temp= new ListNode();
            temp->next=curr->next;
            curr->next=temp;
            temp->val=gcd;
            curr=temp->next;
        }
        return head;
    }
};