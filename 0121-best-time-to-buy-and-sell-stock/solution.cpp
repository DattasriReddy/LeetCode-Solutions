class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit = 0;
        for(int i: prices){
            if(i<minprice){
                minprice=i;
                }
            else if(i-minprice>maxprofit){
                maxprofit=i-minprice;
                }
                    }
        return maxprofit;
    }
};
