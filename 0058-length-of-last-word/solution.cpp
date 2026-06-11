class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        for(int i=s.length()-1;i>=0;i--){
            if(ans==0){
                if(s[i]==' '){
                    continue;
                } else{
                    ans++;
                }
            } else{
                if(s[i]!=' '){
                    ans++;
            }   else{
                    break;
            }
            }
            
        }
        return ans;
    }
};
