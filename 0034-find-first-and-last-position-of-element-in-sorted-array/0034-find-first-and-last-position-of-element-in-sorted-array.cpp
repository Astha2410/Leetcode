class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        vector<int> ans;
        int count = 0;
        ans.push_back(-1);
        ans.push_back(-1);
        
        for (int i = 0; i < n; i++){
            if(nums[i] == target){
                count++;
                ans[1] = i;
                ans[0] = i - (count - 1);
            }
            
            
           
            
        }
       
        return ans;
        
    }
};