class Solution {
public:

    string encode(vector<string>& strs) {
        string final;
        for (string& str : strs) {
            int s = str.size();
            final = final + std::to_string(s) + "#" + str;
        }
        return final;
    }
    // "5#hello5#world"
    vector<string> decode(string s) {
        vector<string> final;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') { // move pointer until reaches delimeter
                j++;
            }
            int size_str = std::stoi(s.substr(i, j-i));
            string str = s.substr(j+1,size_str);
            final.push_back(str);
            i = j + size_str + 1;
        }
        return final;
    }
};
