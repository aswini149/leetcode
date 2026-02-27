class Solution {
    public int maxSubArray(int[] arr) {
        if (arr == null || arr.length == 0) {
			return 0;
		}
		if (arr.length == 1) {
			return arr[0];
		}
        int temp = 0;
        int max = 0;
        for (int i = 0; i < arr.length; i++) {
            temp = Math.max(arr[i], temp + arr[i]);
            max = Math.max(max, temp);
        }
        return max;
		/*int max = 0;
		int windowSum = 0;
		for (int end = 0; end < arr.length; end++ ) {
			windowSum += arr[end];
            System.out.println("window SUM & max sum " + windowSum + " " + max);
            max = Math.max(max, windowSum);
			
            if (windowSum < 0) {
                windowSum = 0;
            }
		}
		return max;*/
    }
}