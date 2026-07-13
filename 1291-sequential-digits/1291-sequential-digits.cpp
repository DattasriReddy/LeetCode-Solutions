class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        std::vector<int> result;
        std::queue<int> q;
        
        // Initialize queue with single-digit starters
        for (int i = 1; i <= 8; ++i) {
            q.push(i);
        }
        
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            
            if (curr >= low && curr <= high) {
                result.push_back(curr);
            }
            
            // Extract the last digit to find the next one
            int last_digit = curr % 10;
            if (last_digit < 9) {
                // Form the next sequential number
                long long next_num = (long long)curr * 10 + (last_digit + 1);
                
                if (next_num <= high) {
                    q.push(next_num);
                }
            }
        }
        
        return result;
    }
};