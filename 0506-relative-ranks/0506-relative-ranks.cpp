class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> athletes;
        
        // Store scores and their original indices
        for (int i = 0; i < n; ++i) {
            athletes.push_back({score[i], i});
        }
        
        // Sort in descending order of scores
        sort(athletes.begin(), athletes.end(), greater<pair<int, int>>());
        
        vector<string> ans(n);
        
        // Assign ranks and medals based on sorted order
        for (int i = 0; i < n; ++i) {
            int original_index = athletes[i].second;
            if (i == 0) {
                ans[original_index] = "Gold Medal";
            } else if (i == 1) {
                ans[original_index] = "Silver Medal";
            } else if (i == 2) {
                ans[original_index] = "Bronze Medal";
            } else {
                ans[original_index] = to_string(i + 1);
            }
        }
        
        return ans;

    }
};