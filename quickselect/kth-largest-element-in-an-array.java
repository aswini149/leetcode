class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>(Collections.reverseOrder());
        for (int element : nums) {
            priorityQueue.add(element);    
        }

        for (int i = 0; i < k; i++) {
            int value = priorityQueue.poll();
            if (i == k -1) {
                return value;
            }
        }
        return -1; 
    }
}