class Solution {
    public String replaceWords(List<String> dictionary, String sentence) {
        Set<String> set = new HashSet<>(dictionary);
        int i = 0;
        StringBuilder ans = new StringBuilder();
        
        while (i < sentence.length()) {
            StringBuilder s1 = new StringBuilder();
            int start = i;
            while (i < sentence.length() && sentence.charAt(i) != ' ') {
                s1.append(sentence.charAt(i));
                ans.append(sentence.charAt(i));
                if (set.contains(s1.toString())) {
                    break;
                }
                i++;
            }
            while (i < sentence.length() && sentence.charAt(i) != ' ') i++;
            if (i < sentence.length()) ans.append(' ');
            
            i++;
        }
        return ans.toString();
    }
}