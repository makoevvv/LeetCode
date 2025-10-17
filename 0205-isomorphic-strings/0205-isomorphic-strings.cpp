class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char, char> mps, mpt;
        int sizeS = s.size(), sizeT = t.size();
        if (sizeT != sizeS) {
            return false;
        }
        for (int i = 0; i < sizeT; i++) {
            if (mps.find(s[i]) == mps.end() && mpt.find(t[i]) == mpt.end()) {
                mps[s[i]] = t[i];
                mpt[t[i]] = s[i];
            } else if (mps[s[i]] != t[i] || mpt[t[i]] != s[i]) {
                return false;
            }
        }
        return true;
    }
};