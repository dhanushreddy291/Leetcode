class Solution {
public:
    int tribonacci(int n) {
        int T[4] = {0, 1, 1, 0};
        for (int i = 3; i <= n; i++, T[0] = T[1], T[1] = T[2], T[2] = T[3])
            T[3] = T[0] + T[1] + T[2];
        return (n < 3) ? T[n] : T[3];   
    }
};