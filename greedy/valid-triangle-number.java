class Solution {
    public int triangleNumber(int[] nums) {
        if (nums == null || nums.length == 0 ) {
            return 0;
        }
        Arrays.sort(nums);
        int couunt = 0;
        int length = nums.length;
        for (int i = length - 1 ; i >= 2; i--) {
            int left = 0;
            int right = i - 1;
            //System.out.println("Starting index: " + i + " " + left + " " + right);
            
            while (left < right) {
                //System.out.println("Starting numbers: " + nums[i] + " " + nums[left] + " " + nums[right]);
                if (nums[left] + nums[right] > nums[i]) {
                    //System.out.println("Match i + j > k");
                    couunt += (right - left);
                    right--;
                } else {
                    //System.out.println("less then target incrementing let");
                    left++;
                } 
            }
        }
        return couunt;
    }
}