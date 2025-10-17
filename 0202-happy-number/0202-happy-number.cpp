class Solution {
public:
    unordered_set <int> st;
    int foo (int x) {
        int ans = 0;
        string str;
        while (x != 0) {
            str += '0' + x % 10;
            x /= 10;
        }
        for (int i = 0; i < str.size(); i++) {
            ans += pow((str[i] - '0'), 2);
        }
        return ans;
    }
    bool isHappy(int n) {
        int x = foo(n);
        while (st.find(x) == st.end()) {
            st.insert(x);
            if (x == 1) {
                return true;
            }
            x = foo(x);
        }
        return false;
    }
};