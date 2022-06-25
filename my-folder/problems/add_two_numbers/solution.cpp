class Solution {
public:
    ListNode* addTwoNumbers(ListNode* p, ListNode* q) 
    {

        if(p == nullptr && q == nullptr) 
            return nullptr;
		
        int sum = 0;
        if(p != nullptr)
        {
            sum += p->val;
            p = p->next;
        }
        
        if(q != nullptr)
        {
            sum += q->val;
            q = q->next;
        }
        
        ListNode* res = new ListNode(sum%10);

        if(sum > 9)
        {
            if(p != nullptr) 
                p->val ++;
            else if(q != nullptr) 
                q->val ++;
            else
            {
                res->next = new ListNode(sum/10);
                return res;
            }
        }
        res->next = addTwoNumbers(p, q);
        
        return res;
    }
};