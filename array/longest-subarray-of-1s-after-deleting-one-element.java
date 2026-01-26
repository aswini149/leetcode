class Solution {
    public int longestSubarray(int[] nums) {
        int windowCount0 = 0;
        int left = 0;
        int maxCount = 0;
        
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 0) {
                windowCount0++;
            }

            while (windowCount0 > 1) {
                if (nums[left] == 0) {
                    windowCount0--;
                }
                left++;
            }
            maxCount = Math.max(maxCount, i - left + 1);
        }
        return maxCount - 1;
    }
}