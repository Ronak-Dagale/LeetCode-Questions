class Solution {
public:
    bool checkValidString(string s) {
        int cnt1=0,cnt2=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            {
                cnt1++;
                cnt2++;
            }
            else if(s[i]==')')
            {
                cnt1--;
                cnt2--;
            }
            else
            {
                cnt1--;
                cnt2++;
            }
            
            if(cnt2<0) return 0;
            if(cnt1<0) cnt1=0;
        }
        if(!cnt1)return 1;
        else return 0;
      
    }
};