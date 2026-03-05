class Solution {
    public String removeDuplicates(String s) {
        Stack<Character> stack = new Stack<>();
        
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (!stack.isEmpty() && stack.peek() == c) {
                //forward to the last index for the same char
                while (i + 1 < s.length() && s.charAt(i) == s.charAt(i+1)) {
                    i++;
                }
                System.out.println("i at " + i);
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        StringBuilder res = new StringBuilder();
        for (Character cc : stack) {
            res.append(String.valueOf(cc));
        }
        return res.toString();
    }
}