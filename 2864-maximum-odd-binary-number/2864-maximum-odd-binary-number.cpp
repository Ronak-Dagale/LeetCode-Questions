class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt1=0;
        int cnt0=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                cnt1++;
            else
                cnt0++;
        }
        cnt1--;
        int i=0;
        while(cnt1--)
        {
            s[i++]='1';
        }
        
        while(cnt0--)
        {
           s[i++]='0'; 
        }
        s[i]='1';
        return s;
    }
};