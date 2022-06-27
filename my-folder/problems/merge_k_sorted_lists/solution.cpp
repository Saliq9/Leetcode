class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) 
    {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
        if (l1->val > l2->val)
            swap(l1, l2);

        ListNode *res = l1;
        while (l1 != NULL && l2 != NULL)
        {
            ListNode *temp = NULL;
            while (l1 != NULL && l1->val <= l2->val)
            {
                temp = l1;
                l1 = l1->next;
            }
            temp->next = l2;
            swap(l1, l2);
        }
        return res;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if(lists.size()==0)
            return NULL;
        
         ListNode *temp=lists[0];
        for(int i=1;i<lists.size();i++)
        {
            temp=mergeTwoLists(temp,lists[i]);
        }
        return temp;
    }
};
