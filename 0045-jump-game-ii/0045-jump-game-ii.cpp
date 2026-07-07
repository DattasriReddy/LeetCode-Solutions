class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() <= 1) return 0;
        int max_dist=0;
        int farthest=0;
        int jumps=0;
        for(int i=0;i<nums.size()-1;i++){
            farthest=max(farthest,i+nums[i]);
            if(i==max_dist){
                jumps++;
                max_dist=farthest;
                if(max_dist>=nums.size()-1){
                    break;
                }
            }
        }
        return jumps;
    }
};