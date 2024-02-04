#include <algorithm>
#include <cstdio>
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
            if(length(l1) < length(l2)){
                ListNode* temp = l1;
                l1 = l2;
                l2 = temp;
                temp = nullptr;
            }
            int sum = 0;
            int carry = 0;
            ListNode* curl1 = l1;
            ListNode* curl2 = l2;
            while (curl2!=nullptr) {
                curl1->val += curl2->val;
                curl1 = curl1->next;
                curl2 = curl2->next;
            }
            curl1 = l1;
            curl2 = l2;
            while (curl1!=nullptr) {
                if(curl1->val >= 10 && curl1->next!=nullptr){
                    curl1->val = curl1->val - 10;
                    curl1->next->val += 1;
                    curl1 = curl1->next;
                }
                else if(curl1->val>=10 && curl1->next==nullptr){
                    curl1->next = new ListNode();
                    curl1->val = curl1->val - 10;
                    curl1->next->val += 1;
                    curl1 = curl1->next;
                }
                else {
                    curl1 = curl1->next;
                }
            }
            return l1;
        }

    private:
        int length(ListNode* head){
            ListNode* temp = head;
            int counter = 0;
            while (temp!=nullptr) {
                counter++;
                temp = temp->next;
            }
            return counter;
        }
};
