#include <algorithm>
#include <charconv>
#include <vector>
using namespace std;


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
            ListNode* temp;
            int carry = 0;
            vector<int> list1 = convert_ll_to_vector(l1);
            vector<int> list2 = convert_ll_to_vector(l2);
        }
    public:
        vector<int> convert_ll_to_vector(ListNode* head){
            ListNode* temp = head;
            vector<int> temp_vec;
            while (temp!=nullptr) {
                temp_vec.push_back(temp->val);
                temp = temp->next;
            }
            return temp_vec;
        }
    public:
        vector<int> add_two_vectors(vector<int> a, vector<int> b){
            if(a.size() < b.size()){
                vector<int> temp = b;
                b = a;
                a = temp;
            }
            for (int i=0; i<b.size(); i++) {
                a[i] += b[i];
            }
            for (int i=0; i<=a.size(); i++) {

            }
        }
};
