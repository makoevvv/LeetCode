/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if (guess(1) == 0) {
            return 1;
        } else if (guess(n) == 0) {
            return n;
        } else {
            long long l = 1, r = n;
            for (int i = 0; i < 33; i++) {
                int k = guess((l + r) / 2);
                if (k == 0) {
                    return (l + r) / 2;
                } else if (k == -1) {
                    r = (l + r) / 2;
                } else {
                    l = (l + r) / 2;
                }
            }
        }
        return 1;
    }
};