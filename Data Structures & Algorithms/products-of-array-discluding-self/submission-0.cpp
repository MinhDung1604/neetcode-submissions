class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int productAll = 1;
    for (int i : nums) {
        if (i != 0)
        productAll *= i;
    }
    vector<int> res;
    for (int i : nums) {
    if (i == 0) {
        res.push_back(productAll);
    } else
    res.push_back(productAll / i);
    }
    return res;
    }
    
};
