class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int n = prices.size();
    int ans = 0;
    int buyAt = INT_MAX;
    
   for(int i = 0; i<n; i++){
       buyAt = min(buyAt, prices[i]);
       ans = max(ans, prices[i] - buyAt);
   }
    return ans;

        
    }
};