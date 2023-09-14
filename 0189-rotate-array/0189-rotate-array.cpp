class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         vector<int> ans;
         int K = k % n;
    
        for(int i = n-K; i< n; i++){
            ans.push_back(nums[i]);
        
        }
        for(int i = 0; i < n-K; i++){
            ans.push_back(nums[i]);
        }

    nums = ans;      
    }
};