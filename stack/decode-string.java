class Solution {
    public String decodeString(String s) {
        Stack<StringBuilder> stack = new Stack<>();
        Stack<Integer> stackInt = new Stack<>();
        StringBuilder builder = new StringBuilder();
        int k = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            System.out.println("Processing " + c);

            if (isValidNumber(c)) {
                //stackInt.push(Integer.valueOf(c));
                //k = (k * 10) + (c - '0');
                String s1 = String.valueOf(c);
                //StringBuilder temp = new StringBuilder((String)c);
                k = Integer.valueOf(s1);
                System.out.println(Integer.valueOf(c) + "k value " + k);
                //Instead StringbUilder , Interger.valueOf, String.valueOf
            } else if (c == '[') {
                stackInt.push(k);
                stack.push(builder);
                builder = new StringBuilder();
                k = 0;
                System.out.println("pushing " + stackInt.size());
            } else if(c == ']') {
                StringBuilder decoded = builder;
                int count = stackInt.pop();
                builder = stack.pop();
                System.out.println("count" + count);
                for (int index = 0; index < count; index++) {
                    builder.append(decoded);
                }
            } else {
                builder.append(c);
            }
            System.out.println(builder.toString());
        }
        
        return builder.toString();
    }

    private static boolean isValidNumber(char c) {
        if (c > '0' && c < '9') {
            return true;
        }
        return false;

    }
}