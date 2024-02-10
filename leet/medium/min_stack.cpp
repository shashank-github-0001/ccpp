#include <stack>

class MinStack {
    public:
        std::stack<int> the_stack;
        std::stack<int> the_min_stack;
        MinStack() {
        }
        void push(int val) {
            the_stack.push(val);
            if(the_min_stack.size() == 0 || val <= the_min_stack.top()){
                the_min_stack.push(val);
            }
        }
        void pop() {
            if(the_stack.top() == the_min_stack.top()){
                the_min_stack.pop();
            }
            the_stack.pop();
        }
        int top() {
            return the_stack.top();
        }
        int getMin() {
            return the_min_stack.top();
        }
};
