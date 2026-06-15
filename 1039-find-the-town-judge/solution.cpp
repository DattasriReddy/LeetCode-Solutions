class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> point(n+1,0);
        for(auto &t : trust){
            point[t[0]]--; 
            point[t[1]]++;
        }
        for (int i = 1; i <= n; i++) {
            if (point[i] == n - 1)
                return i;
        }

        return -1;
    }
};
