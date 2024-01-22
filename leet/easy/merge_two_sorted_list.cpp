#include <iostream>
#include <algorithm>
#include <vector>


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



int main () {}


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* temp1;
    ListNode* temp2;
    if ( list1 == nullptr && list2 == nullptr ) return temp1;
    if ( list1 == nullptr ) return list2;
    if ( list2 == nullptr ) return list1;
    if ( list1->val > list2->val ){
        temp1 = list1;
        list1 = list2;
        list2 = temp1;
    }
    temp1 = list1;
    temp2 = list2;
    while ( temp1->next != nullptr && temp2 != nullptr ) {
        if ( temp2->val >= temp1->val && temp2->val <= temp1->next->val) {
            list2 = list2->next;
            temp2->next = temp1->next;
            temp1->next = temp2;
            temp2 = list2;
        }
        temp1 = temp1->next;
    }
    if ( temp1->next == nullptr ) temp1->next = temp2;
    return list1;
}


//scrap all and do it again tomorrow
