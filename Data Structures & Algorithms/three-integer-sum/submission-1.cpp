class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Approach: Sort, fix a num, two-pointer twoSum on the rest
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++) {
            // TwoSum on the rest
            int num = nums[i];
            int target = -num;
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                // cout << j << " " << k << " " << target << " " << nums[j] + nums[k] << endl;
                
                if (nums[j] + nums[k] == target) {
                    res.push_back({num, nums[j], nums[k]});
                    j = k;
                } else if (nums[j] + nums[k] > target) {
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
