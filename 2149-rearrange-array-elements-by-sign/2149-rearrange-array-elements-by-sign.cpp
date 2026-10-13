class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> positive;
        queue<int> negative;
        for(int num:nums){
            if(num>=0){
                positive.push(num);
            } else{
                negative.push(num);
            }
        }
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=positive.front();
                positive.pop();
            } else{
                nums[i]=negative.front();
                negative.pop();
            }
        }
        return nums;
    }
};