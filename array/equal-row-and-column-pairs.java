class Solution {
    public int equalPairs(int[][] grid) {
        Map<String, Integer> rowMap = new HashMap<>();
        int n = grid.length;

        for (int i = 0; i < n; i++) {
            String rowString = Arrays.toString(grid[i]);
            rowMap.put(rowString, rowMap.getOrDefault(rowString, 0) + 1);
        }

        int count = 0;
        for (int col = 0; col < n; col++) {
            int[] column = new int[n];
            for (int row = 0; row < n; row++) {
                column[row] = grid[row][col];
            }

            String colString = Arrays.toString(column);

            count += rowMap.getOrDefault(colString, 0);
        }

        return count;
    }
}