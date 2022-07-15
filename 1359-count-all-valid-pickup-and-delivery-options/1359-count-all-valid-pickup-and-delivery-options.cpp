class Solution {
public:
    int countOrders(int n) {
        long Orders = 1;
        for (int i = 1; i <= n; i++, Orders %= 1000000007) {
            Orders *= (long)i * (long)(2 * i - 1);
        }
        return Orders;
    }
};