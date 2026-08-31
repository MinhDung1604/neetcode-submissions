class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> hashm;
        for (string str : strs) {
            string copy = str;
            sort(str.begin(), str.end());
            hashm[str].push_back(copy);
        }
        vector<vector<string>> result;
        for (auto& pair : hashm) {
            result.push_back(pair.second);
        }
        return result;
    }
};
