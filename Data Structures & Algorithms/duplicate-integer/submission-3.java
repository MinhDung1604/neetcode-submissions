class Solution {
    public boolean hasDuplicate(int[] nums) {
        dict = new HashMap();
        for (int num : nums) {
            if (!dict.keys().contains(num)) {
                dict.put(num, 1);
            } else {
                return false;
            }
        }
        return true;
    }
}