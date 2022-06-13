class Solution {
  public:
    vector < int > nextGreaterElements(vector < int > & nums) {
      int N = nums.size();
      vector < int > nextGreaterElement(2 * N, -1);
      stack < int > Stack({
        nums[N - 1]
      });
      for (int i = 2*N - 2; i >= 0; i--) {
        while (!Stack.empty() && Stack.top() <= nums[i%N]) {
          Stack.pop();
        }
        nextGreaterElement[i] = (Stack.empty()) ? -1 : Stack.top();
        Stack.push(nums[i%N]);
      }
      nextGreaterElement.erase(N + nextGreaterElement.begin(), nextGreaterElement.end());
      return nextGreaterElement;
    }
};