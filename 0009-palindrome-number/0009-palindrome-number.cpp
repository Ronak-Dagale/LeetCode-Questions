class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        
        long long mul=1;
        long long int y=x;
       long long int chk=0;
        while(y!=0)
        {
           int digi=y%10;
            chk=chk*10+digi;
            y=y/10;
        }
        //cout<<chk<<endl;
        if(x==chk) return 1;
        else return 0;
    }
};