class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto a=headA;
        auto b=headB;
        while(a!=b)
        {
            a=a?a->next:headB;
            b=b?b->next:headA;
        }
        return a;
    }
};
