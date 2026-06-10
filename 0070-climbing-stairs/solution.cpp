class Solution {
public:
    int climbStairs(int n) {
       int first =1;
       int second =1;
       while(n!=1){
        int temp=second;
        second=first+second;
        first=temp;
        n--;
       }
       return second;
    }
};
