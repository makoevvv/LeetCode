class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += k) {
            if ((i / k) % 2 == 0) {
                //cout << i << " " << s[i] << " / ";
                int n = min(int(s.size()), i + k);
                for (int j = i; j < n - ((n - i) / 2); j++) {
                    //cout << s[j]<< " " << s[n - j + i - 1] << " || ";
                    swap(s[j], s[n - j + i - 1]);
                }
            }
        }
        return s;
    }
};