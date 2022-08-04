class Solution {
public:
    int countPrimes(int N) {
        int primesCount = 0, sqrtN = sqrt(N);
        vector <bool> isPrime(N + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i <= sqrtN; i++) {
            if (!isPrime[i]) continue;
            for (int j = i * i; j < N; j += 2 * i) {
                isPrime[j] = false;
            }
        }
        for (int i = 2; i < N; i++) {
            if (!isPrime[i] || (i != 2 && i % 2 == 0)) continue;
            primesCount++;
        }
        return primesCount;
    }
};