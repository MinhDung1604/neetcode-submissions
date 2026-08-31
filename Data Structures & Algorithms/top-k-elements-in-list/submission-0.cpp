class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Count the frequency O(n)
        unordered_map<int,int> frequency; //key = element, value = frequency
        for (int num : nums) {
            frequency[num]++;
        }
        
        vector<pair<int,int>> pairs;
        for (const auto& p : frequency) {
            pairs.push_back({p.second, p.first});
        }

        sort(pairs.rbegin(), pairs.rend());

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(pairs[i].second);
        }
        return result;
    }
};
