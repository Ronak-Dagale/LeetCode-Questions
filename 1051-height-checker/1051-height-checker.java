class Solution {
    public int heightChecker(int[] heights) {
        int[] temp=Arrays.copyOf(heights,heights.length);
        Arrays.sort(temp);
        int ans=0;
        
        for(int i=0;i<temp.length;i++)
        {
            if(heights[i]!=temp[i]) ans++;
        }
        return ans;
    }
}