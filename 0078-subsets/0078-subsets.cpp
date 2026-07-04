class Solution {
public:
    vector<vector<int>> ans;
    void solve(int index,vector<int>& nums,vector<int>& curr){
        if(index==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        solve(index+1,nums,curr);
        curr.pop_back();
        solve(index+1,nums,curr);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        solve(0,nums,curr);
        return ans;
    }
};