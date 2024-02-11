#include <bits/stdc++.h>


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* cur = head;
            ListNode* temp = nullptr;
            int length_of_node = length(head);
            if(length_of_node==1) return nullptr;
            if(length_of_node==n) return head->next;
            int count = 0;
            while (count!=length_of_node-n-1) {
                count++;
                cur = cur->next;
            }
            temp = cur->next;
            cur->next = cur->next->next;
            return head;
        }
    public:
        int length(ListNode* head) {
            int count = 0;
            while(head!=nullptr){
                count++;
                head = head->next;
            }
            return count;
        }
};
