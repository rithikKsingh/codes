class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int count=0;
        if(head==nullptr)
            return head;
        ListNode* temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        if(count==k)
            return head;
        k=k%count;
        if(k==0)
            return head;
        temp=head;
        for(int i=1;i<count-k;i++){
            head=head->next;
        }
        auto temp1=head;
        head=head->next;
        temp1->next=nullptr;
        temp1=head;
        while(temp1->next!=nullptr)
            temp1=temp1->next;
        temp1->next=temp;
        return head;
    }
};
