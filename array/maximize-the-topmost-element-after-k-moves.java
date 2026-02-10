class Solution {
    public int maximumTop(int[] nums, int k) {
        int max = -1;
        int i = 0;
        while (i < k - 1) {
            max = Math.max(max, nums[i]);
            i++;
        }
        System.out.println("Max " + max);
        System.out.println("k " + k);
        if (i - 1 == k) {
            return -1;
        }
        return max;
    }
}