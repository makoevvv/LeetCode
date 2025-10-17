class Solution {
public:
    bool isValid(string s) {
        stack <char> br;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                br.push(s[i]);
            } else if (br.size() == 0) {
                return false;
            } else {
                if (s[i] == ')') {
                    if (br.top() == '(') {
                        br.pop();
                    } else {
                        return false;
                    }
                } else if (s[i] == '}') {
                    if (br.top() == '{') {
                        br.pop();
                    } else {
                        return false;
                    }
                } else {
                    if (br.top() == '[') {
                        br.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        if (br.size() == 0){
            return true;
        } else {
            return false;
        }
    }
};