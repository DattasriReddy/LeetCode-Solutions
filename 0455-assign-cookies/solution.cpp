class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // Sort children's greed factors and cookie sizes
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        
        int child_ptr = 0; // Tracks the current child we want to satisfy
        int cookie_ptr = 0; // Tracks the current cookie we are evaluating
        
        // Loop through both arrays until one runs out
        while (child_ptr < g.size() && cookie_ptr < s.size()) {
            // If cookie size satisfies the child's greed factor
            if (s[cookie_ptr] >= g[child_ptr]) {
                child_ptr++; // Move to the next child
            }
            cookie_ptr++; // Always move to the next cookie
        }
        
        // The index of child_ptr represents the total count of satisfied children
        return child_ptr;
        
    }
};
