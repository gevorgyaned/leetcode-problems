class MyQueue {
private:
    std::stack<int> st1, st2;

public:
    MyQueue() {

    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        while (!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }

        int tmp = st2.top();
        st2.pop();

        while (!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }

        return tmp;
    }
    
    int peek() {
        while (!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }

        int tmp = st2.top();

        while (!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }

        return tmp;
    }
    
    bool empty() {
        return st1.empty();
    }
};


class MyStack {
public:
    std::queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int n = q.size(); 

        for(int i=0; i<n-1; i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int result = q.front();
        q.pop();

        return result;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
