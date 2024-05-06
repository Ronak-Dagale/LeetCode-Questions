class Solution {
public:
    bool isValid(string s) {
        int cntch=0;
        int cntv=0;
        int cntco=0;
        
        int i=0;
        while(i<s.size())
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
            {
               cntch++;
                
                if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' 
              || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u')
                cntv++;
            else
                cntco++;
            } 
            else if(s[i]>='0' && s[i]<='9')
            {
                cntch++;
            }
            else
                return 0;
            
            
            i++;
        }
        if(cntch>=3 && cntv>=1 && cntco>=1)
                return 1;
        return 0;
    }
};