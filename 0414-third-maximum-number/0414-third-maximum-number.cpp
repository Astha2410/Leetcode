class Solution {
public:
    int thirdMax(vector<int>& nums) {
       
        
        sort(nums.begin() , nums.end(), greater<int>());
        int total_Element = 1;
        int prev_Element = nums[0];
     

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != prev_Element){
                total_Element += 1;
                prev_Element = nums[i];
            }
            if(total_Element == 3){
                return nums[i];
            }
          
        }
         
        return nums[0];
    }
};