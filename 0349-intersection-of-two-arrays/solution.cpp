class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> set1(nums1.begin(), nums1.end());
        std::vector<int> result;
        
        // Traverse nums2 and check for common elements
        for (int num : nums2) {
            if (set1.count(num)) {
                result.push_back(num);
                set1.erase(num); // Remove to guarantee unique elements in the result
            }
        }
        
        return result;
    }
};
