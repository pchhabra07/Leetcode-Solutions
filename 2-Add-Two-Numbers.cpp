/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* cur1=l1;
        ListNode* cur2=l2;
        ListNode* sm=new ListNode(0,nullptr);
        ListNode* ans_head=sm;
        int carry=0;
        int up=0;
        int down=0;
        while(cur1!=nullptr || cur2!=nullptr){
            if(cur1==nullptr){
                up=0;
                down=cur2->val;
            }
            else if(cur2==nullptr){
                up=cur1->val;
                down=0;
            }
            else{
                up=cur1->val;
                down=cur2->val;
            }
            if((carry+up+down)>9){
                int sum=(up+down+carry)-10;
                ListNode* temp=new ListNode(sum,nullptr);
                sm->next=temp;
                sm=temp;
                carry=1;
            }
            else{
                int sum=up+down+carry;
                ListNode* temp=new ListNode(sum,nullptr);
                sm->next=temp;
                sm=temp;
                carry=0;
            }
            if(cur1==nullptr){
                cur2=cur2->next;
            }
            else if(cur2==nullptr){
                cur1=cur1->next;
            }
            else{
                cur1=cur1->next;
                cur2=cur2->next;
            }
        }
        if(carry==1){
            ListNode* extra=new ListNode(carry,nullptr);
            ListNode* temp2=ans_head;
            while(temp2->next!=nullptr){
                temp2=temp2->next;
            }
            temp2->next=extra;
        }
        return ans_head->next;
    }
};