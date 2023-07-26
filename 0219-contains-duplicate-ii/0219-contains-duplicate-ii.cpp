class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int ,int> mapIndex;
        
        for(int i = 0; i < n; i++){
            if(mapIndex.count(nums[i]) > 0 ){
                if( i - mapIndex[nums[i]] <= k)
                return true;
            
            else mapIndex[nums[i]] = i;
            }
            
            
            else {
                mapIndex.insert({nums[i], i});
            }
           
        }
        return false;
        
    }
};