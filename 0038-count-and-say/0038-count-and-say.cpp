class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";

        for (int i = 1; i < n; i++) {
            char prev = ans[0];
            string cur_ans;
            int cnt = 1;
            for (int j = 1; j < ans.size(); j++) {
                if (ans[j] == prev) {
                    cnt++;
                } else {
                    cur_ans += to_string(cnt) + prev;
                    prev = ans[j];
                    cnt = 1;
                }
            }
            cur_ans += to_string(cnt) + ans[ans.size() - 1];
            ans = cur_ans;
        }

        return ans;
    }
};