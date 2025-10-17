class MyStack {
    queue <int> cur, reserv;
public:
    MyStack() {
        
    }
    void push(int x) {
        if (!cur.empty()) {
            reserv.push(cur.front());
            cur.pop();
        }
        cur.push(x);
    }
    
    int pop() {
        if (!cur.empty()) {
            int x = cur.front();
            cur.pop();

            if (!reserv.empty()) {
                while(!reserv.empty()) {
                    cur.push(reserv.front());
                    reserv.pop();
                }
                while (cur.size() > 1) {
                    reserv.push(cur.front());
                    cur.pop();
                }
            }
            return x;
        }
        return NULL;
        
        
    }
    
    int top() {
        return cur.front();
    }
    
    bool empty() {
        if (cur.empty() && reserv.empty()) {
            return true;
        } else {
            return false;
        }
    }
};