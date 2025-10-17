class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int who[n], whom[n];
        for (int i = 0; i < n; i++) {
            who[i] = 0;
            whom[i] = 0;
        }

        for (auto i: trust) {
            who[i[0] - 1]++;
            whom[i[1] - 1]++;
        }
        for (int i = 0; i  < n; i++) {
            cout << who[i] << " " << whom[i] << endl;
        }

        for (int i = 0; i < n; i++) {
            if (who[i] == 0 && whom[i] == n - 1) {
                return (i + 1);
            }
        }
        return -1;
    }
};