/*155. Min Stack
Solved
Medium
Topics
Companies
Hint
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.*/

class MinStack {
public:
stack<int> mainStack;
stack<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        mainStack.push(val);
        if(minStack.empty()|| val<=minStack.top())
        minStack.push(val);
    }
    
    void pop() {
        if(!mainStack.empty())
        {
        
        if(mainStack.top()==minStack.top())
        minStack.pop();
        }
        mainStack.pop();
    }
    
    int top() {
        if(!mainStack.empty())
        {
            return mainStack.top();
        }
        return -1;
    }
    
    int getMin() {
        if(!minStack.empty())
        {
            return minStack.top();
        }
        return -1;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */