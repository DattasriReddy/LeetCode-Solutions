class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans=false;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                return ans= true;
            }
            mp[nums[i]]=1;

        }
        return ans;;
    }
};
