class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int pref[n];
        int suff[n];

        pref[0] = prices[0];
        suff[n - 1] = prices[n - 1];

        for (int i = 1; i < prices.size(); i++){
            pref[i] = min(pref[i - 1], prices[i]);
        }

        for (int i = n - 2; i >= 0; i--) {
            suff[i] = max(suff[i + 1], prices[i]);
        }
    
        int ans = suff[0] - pref[0];

        for (int i = 0; i < n; i++) {
            ans = max(ans, suff[i] - pref[i]);
        }
        return ans;
    }
};