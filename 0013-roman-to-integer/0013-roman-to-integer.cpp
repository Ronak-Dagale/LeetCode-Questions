class Solution {
public:
    int romanToInt(string str) {
         map<char,int>mp;
        mp['I']=1;
         mp['V']=5;
          mp['X']=10;
           mp['L']=50;
            mp['C']=100;
             mp['D']=500;
             mp['M']=1000;
             
             int i=str.size()-1;
             int ans=0;
             
             ans=mp[str[i]];
             i--;
             while(i>=0)
             {
                 int prev=mp[str[i+1]];
                 int ne=mp[str[i]];
                 
                 if(prev>ne)
                 ans=ans-ne;
                 else
                 ans=ans+ne;
                 
                 i--;
             }
             return ans;
    }
};