class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> pref(n), post(n);
        int x = boxes[0] == '0' ? 0 : 1;
        pref[0] = 0;
        for (int i = 1; i < n; i++) {
            pref[i] = x + pref[i - 1];
            x += boxes[i] == '0' ? 0 : 1;
        }
        post[n - 1] = 0;
        x = boxes[n - 1] == '0' ? 0 : 1;
        for (int i = n - 2; i >= 0; i--) {
            post[i] = x + post[i + 1];
            x += boxes[i] == '0' ? 0 : 1;
        }
        for (int i = 0; i < n; i++) {
            pref[i] += post[i];
        }
        return pref;
    }
};