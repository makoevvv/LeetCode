class MyQueue {
    int Peek;
    bool flag = true;
    stack <int> cur, reserv;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if (flag) {
            Peek = x;
            flag = false;
        }
        cur.push(x);
    }
    
    int pop() {
        if (!cur.empty()) {
            int x;
            while (cur.size() > 1) {
                reserv.push(cur.top());
                cur.pop();
            }
            x = cur.top();
            cur.pop();
            if (!reserv.empty()) {
                Peek = reserv.top();
                while (!reserv.empty()) {
                    cur.push(reserv.top());
                    reserv.pop();
                }
            }
            if (this->empty()) {
                flag = true;
            }
            return x;
        }
        return NULL;
    }
    
    int peek() {
        if (flag) {
            return NULL;
        } else {
            return Peek;
        }
    }
    
    bool empty() {
        if (cur.empty() && reserv.empty()) {
            return true;
        } else {
            return false;
        }
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