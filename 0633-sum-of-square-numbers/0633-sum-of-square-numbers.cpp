class Solution {
public:
    bool isperfect(int n)
    {
        // for(long long i=0;i*i<=n;i++)
        // {
        //     if((i*i)==n) return 1;
        // }
        // return 0;
        long long a=sqrt(n);
        double b=sqrt(n);
        
        return a==b;
        
    }
    bool judgeSquareSum(int c) {
        long long i=0;
        while((c-i*i)>=0)
        {
            int rem=c-(i*i);
            if(isperfect(rem))return 1;
            i++;
        }
        return 0;
    }
};