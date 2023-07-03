class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int n = salary.size();
         double ans =0;
         float count = 0;
        
       
        for(int i = 1; i<n-1; i++){
             ans = ans + salary[i];
             count ++;
     

            }
            ans = ans/count;
            return ans;
        
    }
};