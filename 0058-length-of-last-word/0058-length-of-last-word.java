class Solution {
    public int lengthOfLastWord(String s) {
        int ans=0;
        int n=s.length()-1;
        
        while(n>=0)
        {
            while(n>=0 && s.charAt(n)==' ')
                n--;
            
            while(n>=0 && s.charAt(n)!=' ')
            {
                ans++;
                n--;
            }
            break;
        }
        return ans;
    }
}