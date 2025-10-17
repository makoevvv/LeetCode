class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> a, b;
        if (s.size() != t.size()) {
            return false;
        }
        for (int i = 0; i < s.size(); i++) {
            a[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            b[t[i]]++;
        }
        for (auto i: a) {
            if (b.find(i.first) != b.end()) {
                if (b[i.first] != i.second) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
};