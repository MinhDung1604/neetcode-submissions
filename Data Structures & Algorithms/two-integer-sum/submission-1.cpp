class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // HashSet approach (hashmap with key = num, value = index of num)
        std::unordered_map<int, int> myHashMap;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (myHashMap.find(target-num) == myHashMap.end()) { // if there is target - num (the complement), add it up with num will give us target  
                myHashMap[num] = i;
            } else {
                return {myHashMap[target - num], i};
            }
        }
        return {};
    }
};
