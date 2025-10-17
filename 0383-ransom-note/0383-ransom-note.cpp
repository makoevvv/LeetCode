class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> mag, note;
        for (int i = 0; i < magazine.size(); i++) {
            mag[magazine[i]]++;
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            note[ransomNote[i]]++;
        }
        for (auto i: note) {
            bool flag = mag.find(i.first) != mag.end();
            if (flag) {
                if (i.second > mag[i.first]) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
};