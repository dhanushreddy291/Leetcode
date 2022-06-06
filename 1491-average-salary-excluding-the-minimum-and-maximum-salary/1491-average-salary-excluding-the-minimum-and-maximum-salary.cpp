class Solution {
public:
    double average(vector<int>& salary) {
        int Sum = 0, count = 0;
       int maxElement = *max_element(salary.begin(), salary.end()), minElement = *min_element(salary.begin(), salary.end());
        for (int &sal: salary) {
            if (sal != maxElement && sal != minElement) {
                Sum += sal;
                count++;
            }
        }
        return (double)Sum/(double)count;
    }
};