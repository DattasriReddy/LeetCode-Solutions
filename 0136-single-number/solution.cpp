class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int uniquenum =0;
        for (int num:nums) {
            uniquenum ^=num;
        }
        return uniquenum;
    }
};
