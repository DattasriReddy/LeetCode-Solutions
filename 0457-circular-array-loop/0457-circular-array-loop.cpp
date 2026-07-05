class Solution {
public:
    int next(vector<int>& nums, int i) {
        int n = nums.size();
        return ((i + nums[i]) % n + n) % n;
    }

    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (nums[i] == 0) continue;

            bool dir = nums[i] > 0;

            int slow = i;
            int fast = i;

            while (true) {

                // slow moves once
                if ((nums[slow] > 0) != dir) break;
                slow = next(nums, slow);

                // fast moves first step
                if ((nums[fast] > 0) != dir) break;
                fast = next(nums, fast);

                // fast moves second step
                if ((nums[fast] > 0) != dir) break;
                fast = next(nums, fast);

                if (slow == fast) {

                    // self-loop
                    if (slow == next(nums, slow))
                        break;

                    return true;
                }
            }

            // mark visited
            int curr = i;
            while (nums[curr] != 0 && (nums[curr] > 0) == dir) {
                int nxt = next(nums, curr);
                nums[curr] = 0;
                curr = nxt;
            }
        }

        return false;
    }
};