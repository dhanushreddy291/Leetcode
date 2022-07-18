class Solution {
public:
    int countSubMats(vector<int>nums, int target){
        int n = nums.size(),prefixSum=0,res=0;
        unordered_map<int,int>m;
        m[0] = 1;
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];
            if(m.find(prefixSum-target)!=m.end()) res+=m[prefixSum-target];
            m[prefixSum]++;
        }
        return res;
    }
    
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(),res=0;
        for(int i=0;i<m;i++){
            vector<int>nums(n,0);
            for(int j=i;j<m;j++){
                for(int k=0;k<n;k++) nums[k]+=matrix[j][k];
                res+=countSubMats(nums,target);
            }
        }
        return res;
    }
};