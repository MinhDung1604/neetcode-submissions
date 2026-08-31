class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Approach: Sort, fix a num, two-pointer twoSum on the rest
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++) {
            // TwoSum on the rest
            if (nums[i] > 0) break; // the rest cant add up to a zero
            if (i > 0 && nums[i] == nums[i - 1]) continue; // move i pointer past duplicates
            int num = nums[i];
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                // cout << j << " " << k << " " << target << " " << nums[j] + nums[k] << endl;
                int sum = num + nums[j] + nums[k];
                if (sum == 0) {
                    res.push_back({num, nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++; // move j pointer past duplicates
                    }
                } else if (sum > 0) {
                    k--;
                } else {
                    j++;
                }                
            }
        }

        return res;
    }

    // TwoSum using Hash Map
    // vector<vector<int>> twoSum(int target, vector<int>& restNums) {
    //     std::unordered_set<int> complements;
    //     vector<vector<int>> res;
    //     for (int num : restNums) {
    //         if (complements.find(target-num) == complements.end()) {
    //             complements.insert(num);
    //         } else {
    //             res.push_back({num, target - num});
    //         }
    //     }
    //     return res;
    // }
};
