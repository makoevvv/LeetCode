// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if (n <= 2) {
            for (int i = 1; i <= n; i++) {
                if(isBadVersion(i)) {
                    return i;
                }
            }
        } else {
            long long int l = 1, r = n, ans = -1;
            
            for (long long int i = 0; i <= int(log2(n)); i++) {
                long long int mid = (r + l) / 2;
                if (isBadVersion(mid)) {
                    r = mid;
                    ans = mid;
                } else {
                    l = mid;
                }
            }
            if (ans == -1) {
                if (isBadVersion(n)) {
                    return n;
                } else {
                    return 1;
                }
            }
            return ans;
        }
        return 0;
    }
};