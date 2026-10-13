class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res (nums.size(), 0);
        int p = 0, n = 1;

        for (int num : nums)
        {
            if (num < 0)
            {
                res[n] = num;
                n += 2;
            }
            else
            {
                res[p] = num;
                p += 2;
            }
        }

        return res;
    }
};