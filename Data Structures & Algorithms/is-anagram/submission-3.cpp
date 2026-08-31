class Solution {
public:
    bool isAnagram(string s, string t) {
        // Case 1: different length -> return false;
        if (s.length() != t.length()) {
            return false;
        }
        
        // Case 2: same length
        unordered_map<char,int> freqS;
        unordered_map<char,int> freqT;
        for (int i = 0; i < s.length(); i++) {
            freqS[s[i]]++;
            freqT[t[i]]++;
        }

        return freqS == freqT; // compare if 2 maps are equivalent
    }
};
