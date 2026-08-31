class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> hashmap;
        for (const auto& str : strs) {
            string sortedS = str;
            sort(sortedS.begin(),sortedS.end());
            hashmap[sortedS].push_back(str);
        }
        for (auto& pair : hashmap) {
            result.push_back(pair.second);
        }
        return result;
    }
};
