class Solution {
    public int[] dailyTemperatures(int[] temps) {
        int n = temps.length;
        int[] result = new int[n];
        Stack<Integer> stack = new Stack<>(); 

        for (int today = 0; today < n; today++) {
            while (!stack.isEmpty()) {
                int prevDay = stack.peek();

                if (temps[today] <= temps[prevDay]) {
                    break; // not warmer, stop
                }

                stack.pop();
                result[prevDay] = today - prevDay;
            }
            stack.push(today);
        }

        return result;
    }
}