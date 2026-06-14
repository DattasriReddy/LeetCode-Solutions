class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int fir=0;
        int ans=0;
        for(int sec=0;sec<s.length();sec++){
            if(mp.find(s[sec])!=mp.end()){
                fir=max(fir,mp[s[sec]]+1);
            }
            mp[s[sec]]=sec;
            ans=max(ans,sec-fir+1);
        }
        return ans;
    }
};
