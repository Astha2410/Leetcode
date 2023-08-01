class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();
        int Max = INT_MIN;
        int count = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                count++;
            }
            else count = 0;

            Max = max(count , Max); 
        }
       return Max;


        
    }
};