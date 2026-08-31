class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        std::set<int> mySet(nums.begin(), nums.end());
        std::vector<int> myVec(mySet.begin(),mySet.end());
        std::sort(myVec.begin(), myVec.end());
        int count = 1; int prev = myVec[0]; int maxCount = 1;
        for (int i = 1; i < myVec.size(); i++) {
            cout << myVec[i];
            if (myVec[i] == prev + 1) {
                count++;
            } else {
                if (count > maxCount) maxCount = count;
                count = 1; 
            }
            prev = myVec[i];
        }
         
        return max(count,maxCount);
    }
};
