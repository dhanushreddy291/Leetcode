// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  private:
    void merge(int start1, int end1, int start2, int end2, long long nums[], long long &inversionCount) {
        vector <long long> L, R;
        for (int i = start1; i <= end1; i++) {
            L.push_back(nums[i]);
        }
        for (int i = start2; i <= end2; i++) {
            R.push_back(nums[i]);
        }
        int l = 0, r = 0, index = start1, lSize = end1 - start1 + 1, rSize = end2 - start2 + 1;
            while (l < lSize && r < rSize) {
                if (L[l] <= R[r]) {
                    nums[index++] = L[l++];
                } else {
                    inversionCount += (lSize - l);
                    nums[index++] = R[r++];
                }
            }
        while (l < lSize) nums[index++] = L[l++];
        while (r < rSize) nums[index++] = R[r++];
        return;
    }
    
    void mergeSort(int start, int end, long long nums[], long long &inversionCount) {
        if (start >= end) return;
        int mid = start + (end - start) / 2;
        mergeSort(start, mid, nums, inversionCount);
        mergeSort(mid + 1, end, nums, inversionCount);
        merge(start, mid, mid + 1, end, nums, inversionCount);
    }
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        long long inversionCount = 0;
        int n = N - 1;
        mergeSort(0, n, arr, inversionCount);
        return inversionCount;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends