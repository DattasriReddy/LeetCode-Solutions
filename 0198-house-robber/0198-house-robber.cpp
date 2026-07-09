class Solution {
public:
    int solve(vector<int>& nums){
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        int prev2=nums[0];;
        int prev1=max(nums[0], nums[1]);
        for(int i=2;i<nums.size();i++){
            int current = max(prev1, prev2+ nums[i]);
            prev2=prev1;
            prev1=current;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        return solve(nums);
    }

};