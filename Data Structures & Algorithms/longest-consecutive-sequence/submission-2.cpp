class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        std::unordered_set<int> mySet(nums.begin(), nums.end());
        int longest = 0; int count = 0;
        for (int num : nums) {
            if (mySet.find(num-1) == mySet.end()) {
                int length = 1;
                int next = num + 1;
                while (mySet.find(next) != mySet.end()) {
                    next++;
                    length++;
                }
                longest = max(longest, length);
            }

            
        }
        return longest;
    }
};
