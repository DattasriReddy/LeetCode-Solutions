class Solution {
public:
    int start=0;
    int maxLen=0;
    void helper(int left,int right,string s){
        while(left>=0 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        int len=right-left-1;
        if (len>maxLen) {
            maxLen=len;
            start=left+1;
        }
    }
    string longestPalindrome(string s) {
        if (s.empty())
            return "";
        for(int i=0;i<s.length();i++){
            helper(i,i,s);
            helper(i,i+1,s);
        }
        return s.substr(start,maxLen);
    }
};
