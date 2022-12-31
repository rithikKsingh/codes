class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        auto curr=head;
        int carry=0;
        while(l1||l2||carry!=0){
            int x=l1?l1->val:0;
            int y=l2?l2->val:0;
            int sum=x+y+carry;
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            l1=l1?l1->next:nullptr;
            l2=l2?l2->next:nullptr;
        }
        return head->next;
        
    }
};
