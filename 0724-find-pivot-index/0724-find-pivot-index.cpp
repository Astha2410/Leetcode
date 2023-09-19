class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftsum = 0, rightsum = 0, prefix = 0;

        for(int i = 0 ; i<n; i++){
            prefix += nums[i];
        }
        rightsum = prefix;
        for(int i = 0; i<n; i++){
            leftsum += nums[i];
            if(rightsum == leftsum){
                return i;
            }
            rightsum -= nums[i];
        }
        return -1;
        }
};