class Solution {
    public int maxDepth(String s) {
        int ans=0,cnt=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('){
                cnt++;
                ans=Math.max(ans,cnt);
            }
            else if(s.charAt(i)==')')cnt--;
        }
        return ans;
    }
}