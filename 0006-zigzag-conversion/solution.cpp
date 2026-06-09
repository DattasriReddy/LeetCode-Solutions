class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows==1 || numRows>=s.length()) {
            return s;
        }
        string result = "";
        int n = s.length();
        int cycle = 2*(numRows-1); 
        for (int r= 0;r<numRows;++r) {
            for (int i=r;i<n;i+=cycle) {
                result+=s[i];
                if (r>0 && r<numRows-1) {
                    int diagonal_index=i+cycle-2*r;
                    if (diagonal_index <n) {
                        result +=s[diagonal_index];
                    }
                }
            }
        }

        return result;
    }
};
