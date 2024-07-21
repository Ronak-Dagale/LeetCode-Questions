class Solution {
public:
    int minChanges(int n, int k) {
        int ans=0;
       
        if(k==n) return 0;
        if(k>n) return -1;
        while(n)
        {
            int b1=n&1;
            int b2=k&1;
            
            if(b1!=b2)
            {
               if(b1==1) ans++;
                else
                    return -1;
            }
            n=n>>1;
            k=k>>1;
        }
        return ans;
    }
};