class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr)
        return false;
        auto slow=head;
        auto fast=head;
        while(fast&&fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            return true;
        }
        return false;
    }
};
