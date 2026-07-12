class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted_arr= arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        unordered_map<int,int> mp;
        int rank=1;
        for(int num:sorted_arr){
            if (mp.find(num) == mp.end()) {
                mp[num] = rank;
                rank++;
            }
        }
        vector<int> result;
        for (int num : arr) {
            result.push_back(mp[num]);
        }
    return result;
    }
};