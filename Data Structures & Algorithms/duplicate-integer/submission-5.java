class Solution {
    public boolean hasDuplicate(int[] nums) {
        Map<Integer, Integer> dict = new HashMap();
        for (int num : nums) {
            if (!dict.keySet().contains(num)) {
                dict.put(num, 1);
            } else {
                return true;
            }
        }
        return false;
    }
}