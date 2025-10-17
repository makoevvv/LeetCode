class Solution {
public:
    int climbStairs(int n) {
        vector <int> mas(n + 2, 0);
        mas[0] = 1;
        if (n >= 2) {
            for (int i = 0; i < n; i++) {
                mas[i + 1] += mas[i];
                mas[i + 2] += mas[i];
                for (int i = 0; i <= n; i++) {
                    cout << mas[i] << " ";
                }
                cout << endl;
            }
            
            return mas[n];
        } else {
            return 1;
        }
    }
};