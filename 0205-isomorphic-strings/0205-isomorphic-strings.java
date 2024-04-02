class Solution {
    public boolean isIsomorphic(String s, String t) {
        int []id1=new int[200];
        int []id2=new int[200];
        
        for(int i=0;i<s.length();i++)
        {
            if(id1[s.charAt(i)]!=id2[t.charAt(i)])
                return false;
            
            id1[s.charAt(i)]=i+1;
            id2[t.charAt(i)]=i+1;
        }
        return true;
    }
}