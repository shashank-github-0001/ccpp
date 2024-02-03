#include <iostream>


int main () {}


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* temp = new ListNode();
            int carry = 0;
            ListNode* copy_temp = temp;
            if(l1->next==nullptr && l2->next==nullptr){
                temp->val = l1->val+l2->val;
                return temp;
            }
            ListNode* ltemp = l1;
            ListNode* rtemp = l2;
            while(ltemp!=nullptr && rtemp!=nullptr){
                temp->val = (rtemp->val + ltemp->val + carry)/10;
                carry = (rtemp->val + ltemp->val + carry)%10;
                temp->next = new ListNode();
                temp = temp->next;
                ltemp = ltemp->next;
                rtemp = rtemp->next;
            }
            if(ltemp==nullptr && rtemp==nullptr && carry == 0) return copy_temp;
            if(ltemp==nullptr && rtemp==nullptr && carry != 0){
                temp->next = new ListNode();
                temp = temp->next;
                temp->val = carry;
            }
            if(ltemp==nullptr){
                while (rtemp!=nullptr) {
                    temp->val = (rtemp->val+carry)/10;
                    carry = (rtemp->val+carry)%10;
                    temp->next = new ListNode();
                    temp = temp->next;
                    rtemp = rtemp->next;
                }
            }
            if(rtemp==nullptr){
                while (ltemp!=nullptr) {
                    temp->val = (ltemp->val+carry)/10;
                    carry = (ltemp->val+carry)%10;
                    temp->next = new ListNode();
                    temp = temp->next;
                    ltemp = ltemp->next;
                }
            }
        }
};
