class Solution {
public:
    int strStr(string haystack, string needle) {
        int res = -1;
        for (size_t i = 0; i < haystack.size(); i++) {
            int cnt = 0;
            if (haystack[i] == needle[0]) {
                for (size_t j = i; j < haystack.size(); j++) {
                    if (haystack[j] == needle[j - i]) {
                        cnt++;
                    } else {
                        break;
                    }
                }
                if (cnt == needle.size()) {
                    res = i;
                    break;
                }
            }
        }
        return res;
    }
};