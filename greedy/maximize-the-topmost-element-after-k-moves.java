class Solution {
    public int maximumTop(int[] nums, int k) {
        int n = nums.length;

        if (n == 1) {
            if (k % 2 == 0) {
                return nums[0];
            } else {
                return -1;
            }
        }

        if (k == 0) {
            return nums[0];
        }
        int max = -1;
        for (int i = 0; i < Math.min(n, k-1); i++) {
            max = Math.max(max, nums[i]);
        }

        return max;
    }
}