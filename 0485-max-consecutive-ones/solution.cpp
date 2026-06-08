class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ret = 0;
        int once =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                once++;
            } else {
                once=0;
            }
            ret=max(ret,once);
        }
        return ret;
    }
};
