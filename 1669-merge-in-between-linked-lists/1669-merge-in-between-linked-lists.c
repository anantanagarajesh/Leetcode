/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode* curr = list1;
    struct ListNode* curr2 = list2;
    int count=0;
    while(count!=b)
    {
        curr=curr->next;
        count++;
    }
    while(curr2->next!=NULL)
    {
        curr2=curr2->next;
    }
    curr2->next=curr->next;
    curr=list1;
    count=1;
    while(count!=a)
    {
        curr=curr->next;
        count++;
    }
    curr->next=list2;
    return list1;

}