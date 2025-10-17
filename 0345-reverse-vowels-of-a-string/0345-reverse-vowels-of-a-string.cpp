class Solution {
public:
    string reverseVowels(string s) {
        vector <int> vow;
        for (int i = 0; i < s.size(); i++) {
            char x = toupper(s[i]);
            if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
                vow.push_back(s[i]);
            }
        }
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            char x = toupper(s[i]);
            if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
                s[i] = vow[vow.size() - j - 1];
                j++;
            }
        }
        return s;
    }
};