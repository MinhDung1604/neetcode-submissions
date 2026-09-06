class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxArea = 0;
        while (i < j) {
            int width = j - i;
            int heightI = heights[i];
            int heightJ = heights[j];
            int height = std::min(heightI, heightJ);
            maxArea = std::max(maxArea, width * height);
            if (heightI < heightJ) {
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
    }
};
