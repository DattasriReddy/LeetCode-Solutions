class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> warm(temperatures.size(), 0);
        int n=temperatures.size();
        for(int i=n-2;i>=0;i--) {
            int j=i+1;
            while(j<n && temperatures[j]<= temperatures[i]) { //my org code is in note this is for 100 lol...
                if(warm[j]==0) {
                    j=n;
                    break;
                }
                j+=warm[j];
            }
            if(j<n) warm[i]=j-i;
        }
        return warm;
    }
};
