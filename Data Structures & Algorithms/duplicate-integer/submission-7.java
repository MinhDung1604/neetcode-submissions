class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> dict = new HashSet();
        for (int num : nums) {
            if (!dict.contains(num)) {
                dict.add(num);
            } else {
                return true;
            }
        }
        return false;
    }
}