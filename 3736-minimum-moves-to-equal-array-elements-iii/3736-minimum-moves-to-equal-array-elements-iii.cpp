class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int m= INT_MIN;
        for(int i=0;i<n;i++){
            m= max(m,nums[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+= (m-nums[i]);
        }
        return ans;
    }
};