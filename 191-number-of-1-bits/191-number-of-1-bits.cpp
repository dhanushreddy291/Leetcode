class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bits = 0;
        while (n) {
            n &= (n-1);
            bits++;
        }
        return bits;
        // We can also use inbuilt function __builtin_popcount(n) to return number of set bits.
    }
};