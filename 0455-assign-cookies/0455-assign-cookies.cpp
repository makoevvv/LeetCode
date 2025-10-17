class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans = 0, k = 0; 
        for (int i = 0; i < g.size(); i++) {
            for (int j = k; j < s.size(); j++) {
                if (s[j] >= g[i]) {
                    ans++;
                    k = j + 1;
                    break;
                }
            }
        }
        return ans;
    }
};