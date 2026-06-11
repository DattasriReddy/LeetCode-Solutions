class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty()){
            return 0;
        }
        int maxi=1;
        int ans=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                maxi++;
                ans=max(maxi,ans);
            }else if(nums[i]==nums[i+1]){
                continue;
            } else{
                maxi=1;
            }
        }
        return ans;
    }
};
