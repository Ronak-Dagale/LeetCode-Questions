class Solution {
    public String makeGood(String s) {
         Stack<Character> st = new Stack<>();
        
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push(s.charAt(i));
            }
            else if(st.peek()==s.charAt(i)+32 || st.peek()+32==s.charAt(i))
                st.pop();
            else
                st.push(s.charAt(i));
        }
        
        StringBuilder res=new StringBuilder();
        while(!st.empty())
        {
            res.append(st.pop());
        }
         return res.reverse().toString();
    }
}