
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA;
        while(tempA!=NULL)
        {
            ListNode *tempB = headB;
            while(tempB!=NULL)
            {
                if(tempA==tempB){
                    return tempA;
                }
                else{
                    tempB = tempB->next;
                }
            }
            tempA= tempA->next;   
        }
        return NULL;
    }
};