class Solution {
    boolean solution(String s) {
        boolean answer = true;

        s = s.toLowerCase();
        
        int pCount = 0, yCount = 0;
        
        for (char ch : s.toCharArray()) {
            if (ch == 'p') {
                pCount += 1;
            }
            if (ch == 'y') {
                yCount += 1;
            }
        }
        
        if (pCount == yCount) {
            answer = true;
        } else {
            answer = false;
        }

        return answer;
    }
}