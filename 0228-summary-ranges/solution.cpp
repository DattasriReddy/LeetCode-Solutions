class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        std::vector<std::string> ans;
        int n = nums.size();
        
        for (int i = 0; i < n; ) {
            int start = i;
            
            // Move pointer forward if the next element is consecutive
            while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
                i++;
            }
            
            // Format and store the range
            if (start == i) {
                ans.push_back(std::to_string(nums[start]));
            } else {
                ans.push_back(std::to_string(nums[start]) + "->" + std::to_string(nums[i]));
            }
            
            // Move to the next element past the current range
            i++;
        }
        
        return ans;
    }
};
