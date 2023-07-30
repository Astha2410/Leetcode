class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        unordered_map<int, int> StoreEle;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;

        for(auto i : nums){
            StoreEle[i]++;
        }
        for(int i = 1; i <= n; i++){
            auto it = StoreEle.find(i);
            if(it == StoreEle.end()){
                ans.push_back(i);
            }
        }
        return ans;
        
        
        
    }
};