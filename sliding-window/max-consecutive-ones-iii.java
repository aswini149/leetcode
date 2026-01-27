class Solution {
    public int longestOnes(int[] nums, int k) {
        int maxCount = 0;
        int left = 0;
        int windowCount0 = 0;
        int i = 0;

        //for (int i = 0; i < nums.length; i++) {
        while (i < nums.length) {
            if (nums[i] == 0) {
                windowCount0++;
            } 

            while (windowCount0 > k) {
                if (nums[left] == 0) {
                    windowCount0--;
                }
                left++;
            }
            maxCount = Math.max(maxCount, i - left + 1);
            i++;
        }

        return maxCount;
    }
}