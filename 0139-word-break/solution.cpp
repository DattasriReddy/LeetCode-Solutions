class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(),wordDict.end());
        int n = s.size();
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        int maxLen = 0;
        for (const string& word:wordDict) {
            maxLen=max(maxLen,(int)word.size());
        }
        for (int i=1;i<=n;i++) {
            for (int j = max(0, i - maxLen); j < i; j++) {
                if (dp[j] && dict.contains(s.substr(j,i-j))) {
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n];
    }
};
