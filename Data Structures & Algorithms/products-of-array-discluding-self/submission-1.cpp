class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int prefixProd = 1;
        for (int i = 0; i < nums.size(); i++) {
            res[i] = prefixProd;
            prefixProd *= nums[i];
        }
        int postfixProd = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            res[i] *= postfixProd;
            postfixProd *= nums[i];
        }
        return res;
    }
};
