class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
            ListNode* newhead=new ListNode();
            newhead->next=head;
            auto prev=newhead;
            while(head)
            {
                if(head->next!=nullptr&&head->val==head->next->val){
                    while(head->next&&head->val==head->next->val){
                        head=head->next;
                    }
                    prev->next=head->next;
                }
                else 
                prev=prev->next;
                
                head=head->next;
            }
            return newhead->next;
    }
	
};
