class Solution {
public:
    bool detectCapitalUse(string word) {
        int low = 0, up = 0;
        for (auto i: word) {
            if (tolower(i) == i) {
                low++;
            } else {
                up++;
            }
        }
        if (word.size() == 0) {
            return true;
        }
        if (low == word.size() || up == word.size() || (up == 1 && tolower(word[0]) != word[0])) {
            return true;
        } else {
            return false;
        }
    }
};