#include <stack>
#include <algorithm>

class MinStack {
private:
    std::stack<int> main_stack;
    std::stack<int> min_stack;

public:
    MinStack() {

    }
    
    void push(int val) {
        main_stack.push(val);
        
        
        if (min_stack.empty()) {
            min_stack.push(val);
        } else {
            min_stack.push(std::min(val, min_stack.top()));
        }
    }
    
    void pop() {
        if (!main_stack.empty()) {
            main_stack.pop();
            min_stack.pop(); 
        }
    }
    
    int top() {
        return main_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};