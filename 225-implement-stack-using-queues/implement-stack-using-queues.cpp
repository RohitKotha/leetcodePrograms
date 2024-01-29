class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int k=q1.size();
        if(k==1){
            int o=q1.front();
            q1.pop();
            return o;
        }
        if(!q1.empty()){
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int w=q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return w;
        }
        return 0;
    }
    
    int top() {
        int k=q1.size();
        if(k==1){
            int o=q1.front();
            return o;
        }
        if(!q1.empty()){
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int w=q1.front();
        q1.pop();
        q2.push(w);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return w;
        }
        return 0;
        
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */