class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;
        for(int i=0; i<op.size();i++){
            
            if(st.empty()){
                st.push(stoi(op[i]));
            }
            if(op[i] == "C" ){
                st.pop();
            }
            else if(op[i] == "D" ){
                st.push(2*st.top());
            }
            else if(op[i] == "+"){
                int temp = st.top();
                st.pop();
                int a = temp+st.top();
                st.push(temp);
                st.push(a);
            }
            else{
                st.push(stoi(op[i]));
            }
        }

        vector<int> v;
        
        int sum =0;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }

        for(int i=0; i<v.size()-1;i++){
           
            sum+=v[i];
        }

        return sum;
    }
};