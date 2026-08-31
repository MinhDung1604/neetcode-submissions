class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); i++) {
            
            if (i > 1 && numbers[i] == numbers[i-1]) continue;
            int j = numbers.size() - 1;
            
            while (i < j) {
                int sum = numbers[i] + numbers[j];
                // cout << numbers[i] << " " << numbers[j] << endl;
                if (sum == target) {
                    return {i + 1, j + 1};
                } else if (sum > target) {
                    j--;
                } else {
                    break;
                }
            }
        }
        return {};
    }
};
