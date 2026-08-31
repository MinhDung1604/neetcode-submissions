class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        

        for (char c : s) {
            freq1[c]++;
        }
        for (char c : t) {
            freq2[c]++;
        }
        for (auto kv : freq1) {
            char c = kv.first;
            int count = kv.second;
            auto find = freq2.find(c);
            if (find == freq2.end() || find->second != count) return false;
        }

        return true;
    }
};
