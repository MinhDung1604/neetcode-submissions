class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;

        for (char c : s) {
            // auto find = freq1.find(c);
            // if (find != freq1.end()) {
            //     find->second++;
            // } else {
            //     freq[c] = 1;
            // }
            freq1[c]++;
        }

        for (char c : t) {
            // auto find = freq1.find(c);
            // if (find != freq1.end()) {
            //     find->second++;
            // } else {
            //     freq[c] = 1;
            // }
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
