class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman_values{
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000}
        };
        int result = 0;
        int n = s.size();

        for(int i = 0; i<n; i++){
            int current_values = roman_values[s[i]];
            if( roman_values[s[i+1]] > current_values){
                result -= current_values;
            }
            else{
                result += current_values;
            }
        }
        return result;
       
        
    }
};