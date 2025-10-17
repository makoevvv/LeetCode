class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t k;
        for (int i = 0; i < 32; i++) {
            k *= 2;
            k += n % 2;
            n /= 2;
        }
        return k;
    }

};