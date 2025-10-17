class Solution {
public:
    vector <string> makeVector(string s) {
        vector<string> str;
        string cur;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                str.push_back(cur);
                cur = "";
            } else {
                cur += s[i];
            }
        }
        if (cur != "") {
            str.push_back(cur);
        }
        return str;
    }
    bool wordPattern(string pattern, string s) {
        vector <string> str = makeVector(s);
    
        if (pattern.size() != str.size()) {
            return false;
        }

        unordered_map <char, string> keys_words;
        unordered_map <string, char> words_keys;

        for (int i = 0; i < pattern.size(); i++) {
            bool k = keys_words.find(pattern[i]) == keys_words.end();
            bool w = words_keys.find(str[i]) == words_keys.end();
            if (k && w) {
                keys_words[pattern[i]] = str[i];
                words_keys[str[i]] = pattern[i];
            } else {
                if (keys_words[pattern[i]] != str[i] or words_keys[str[i]] != pattern[i]) {
                    return false;
                }
                
            }
        }
        return true;
    }
};