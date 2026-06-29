class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n,0);
        stack<int> st;
        int prev_time=0;
        for(string &log:logs){
            int x1=log.find(':');
            int x2=log.find(':',x1+1);
            int id=stoi(log.substr(0,x1));
            string type=log.substr(x1+1,x2-x1-1);
            int time=stoi(log.substr(x2 + 1));
            if(type=="start"){
                if(!st.empty()){
                    ans[st.top()]+=time-prev_time;
                }
                st.push(id);
                prev_time=time;
            }else{
                ans[st.top()]+=time-prev_time+1;
                st.pop();
                prev_time=time+1;
            }
        }
        return ans;
    }
};