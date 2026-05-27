class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        if (x<0) return false;
        bool palindrome =true;
        int first=0;
        int second = str.length()-1;
        while(first<second){
            if(str[first]!=str[second]){
                palindrome = false;
                break;
            }
            first++;
            second--;
        }
        return palindrome;
    }
};
