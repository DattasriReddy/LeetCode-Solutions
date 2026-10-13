class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int down= matrix.size()-1;
        int right= matrix[0].size()-1;
        int top=0;
        int left=0;
        vector<int> res;
        while(top<=down&&left<=right){
            for(int i=left ;i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            top++;
            for (int j=top;j <=down;j++){
                res.push_back(matrix[j][right]);
            }
            right--;
            if (top<=down){
            for (int k=right;k>=left;k--){
                res.push_back(matrix[down][k]);
            }
            down--;
            }
            if(left<=right){
            for(int l=down;l>=top;l--){
                res.push_back(matrix[l][left]);
            }
            left++;
            }
        }
        return res;
    }
};