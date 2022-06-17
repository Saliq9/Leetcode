class Solution {
public:
    bool isPalindrome(ListNode* head)
    {
        // finding the mid
        ListNode* p = head;
        ListNode* q = head;
        
        while(q != NULL && q->next != NULL)
        {
            p = p->next;
            q = q->next->next;
        }
        
        // reversing the list from mid
        ListNode* ptr = NULL;
        ListNode* next = NULL;
        while(p != NULL)
        {
            next = p->next;
            p->next = ptr;
            ptr = p;
            p = next;
        }
        
        // finally checking the elements with the reversed mid elements.
        while(ptr != NULL)
        {
            if(head->val != ptr->val)
            {
                return false;
            }
            head = head->next;
            ptr = ptr->next;
        }
        return true;
    }
};