class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        if(head == NULL)
            return false;

        ListNode *p1 = head;
        ListNode *p2 = head;
        
        while(p1 != NULL && p1 ->next != NULL)
        {
            p1 = p1->next->next;
            p2 = p2->next;
            
            if(p1 == p2)
                return true;
        }
                return false;
    }
};