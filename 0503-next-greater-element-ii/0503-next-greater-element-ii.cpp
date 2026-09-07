class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int size=nums.size();
        vector<int> ans(size,-1);
        stack<int> st;
        for(int i=0; i<size*2; i++){
            int curr= nums[i % size];
            while(!st.empty() && curr> nums[st.top()]){ 
                ans[st.top()]=curr;
                st.pop();
            }
            if(i < size) st.push(i);
        }
        return ans;
    }
};

