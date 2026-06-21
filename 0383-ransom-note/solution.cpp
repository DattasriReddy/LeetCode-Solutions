class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
           // Frequency array for lowercase English letters
        std::vector<int> charCount(26, 0);

        // Count each character in the magazine
        for (char c : magazine) {
            charCount[c - 'a']++;
        }

        // Decrement the count for each character in the ransom note
        for (char c : ransomNote) {
            charCount[c - 'a']--;
            // If the count drops below 0, we don't have enough letters
            if (charCount[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
        
    }
};
