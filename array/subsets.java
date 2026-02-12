class Solution {
    public List<List<Integer>> subsets(int[] arr) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> current = new ArrayList<>();
        int index = 0;
        backtrackSubSets(index, current, result, arr);
        return result;
    }
    public static void backtrackSubSets(int index, List<Integer> current, List<List<Integer>> result, int[] arr) {
        System.out.println("current " + current.toString());
        result.add(new ArrayList<>(current));
        for (int i = index ; i < arr.length; i++) {
            current.add(arr[i]);
            backtrackSubSets(i + 1, current, result, arr);
            current.remove(current.size() - 1);
        }
    }
}