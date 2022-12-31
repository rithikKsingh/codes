class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr,*curr=head,*nn;
        while(curr){
            nn=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nn;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        auto fast=head;
        auto slow=head;
        while(fast->next!=nullptr&&fast->next->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        auto dummy=head;
        while(slow){
            if(dummy->val!=slow->val)
            return false;
            slow=slow->next;
            dummy=dummy->next;
        }
        return true;
    }
};
Console
