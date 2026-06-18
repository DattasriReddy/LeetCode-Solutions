class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tottank=0;
        int currtank=0;
        int stindex=0;
        for(int i=0;i<gas.size();i++) {
            tottank+=gas[i]-cost[i];
            currtank+=gas[i]-cost[i];
            if (currtank<0){
                stindex=i+1;
                currtank=0;
            }
        }
        return (tottank<0)? -1:stindex;
    }
};
