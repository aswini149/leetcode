class Solution {
    public String predictPartyVictory(String senate) {
        Queue<Integer> RQ = new java.util.LinkedList<>();
        Queue<Integer> DQ = new java.util.LinkedList<>();

        for (int i = 0; i < senate.length(); i++) {
            char c = senate.charAt(i);
            if (c == 'R') {
                RQ.add(i);
            } else {
                DQ.add(i);
            }
        }
        System.out.println("RQ " + RQ.toString());
        System.out.println("DQ " + DQ.toString());

        while (!RQ.isEmpty() && !DQ.isEmpty()) {
            int rCandidate = RQ.poll();
            int DCandidate = DQ.poll();

            if (rCandidate < DCandidate) {
                RQ.add(rCandidate + senate.length());
            } else {
                DQ.add(DCandidate + senate.length());
            }

            System.out.println("RQ " + RQ.toString());
            System.out.println("DQ " + DQ.toString());
        }

        if (DQ.isEmpty()) {
            return "Radiant";
        } 
        return "Dire";
    }
}