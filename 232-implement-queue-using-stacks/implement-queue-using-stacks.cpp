class MyQueue {
public:
    stack<int>jyo;
    stack<int>raj;
    MyQueue() {
        
    }
    
    void push(int x) {
        jyo.push(x);
    }
    
    int pop() {
        while(!jyo.empty())
        {
            raj.push(jyo.top());
            jyo.pop();
        }
        int a=raj.top();
        raj.pop();
        while(!raj.empty())
        {
            jyo.push(raj.top());
            raj.pop();
        }
        return a;
    }
    
    int peek() {
        while(!jyo.empty())
        {
            raj.push(jyo.top());
            jyo.pop();
        }
        int a=raj.top();
        //raj.pop();
        while(!raj.empty())
        {
            jyo.push(raj.top());
            raj.pop();
        }
        return a;        
    }
    
    bool empty() {
        return jyo.empty();
        

        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */