class Solution {
public:

 int signFunc(long long product){
       
        if(product < 0){
            return -1;
        }
        if(product > 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int arraySign(vector<int>& nums) {
        long long int product = 1;
        for(auto i:nums){
            product *= i*1ll;
            product = product%1000000007; 

        }
        return signFunc(product);
      

        
    }
};