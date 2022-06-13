class Solution {
  public:
    vector < int > nextGreaterElements(vector < int > & nums) {
      int N = nums.size();
      nums.insert(nums.end(), nums.begin(), nums.end());
      vector < int > nextGreaterElement(2 * N, -1);
      stack < int > Stack({
        nums[N - 1]
      });
      for (int i = nums.size() - 2; i >= 0; i--) {
        while (!Stack.empty() && Stack.top() <= nums[i]) {
          Stack.pop();
        }
        nextGreaterElement[i] = (Stack.empty()) ? -1 : Stack.top();
        Stack.push(nums[i]);
      }
      nextGreaterElement.erase(N + nextGreaterElement.begin(), nextGreaterElement.end());
      return nextGreaterElement;
    }
};