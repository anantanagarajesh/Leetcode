/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* last=head;
    struct ListNode *curr,* prev;
    int count=0,N;
    if(head->next==NULL )     return NULL;
    while(last!=NULL) {
        last=last->next;
        count++;
    }
    N=count-n;
    count=0;
    prev=NULL;
    curr=head;
    if(N==0)
        return head->next;
    while(count!=N)
        {
        prev=curr;
        curr=curr->next;
        count++;
    }
    curr=curr->next;
    prev->next=curr;
    return head;
    

}