class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
       
        long long int i=1;
        for(i=1;i*i<=x;i++);
        return i-1;
       
    }
};