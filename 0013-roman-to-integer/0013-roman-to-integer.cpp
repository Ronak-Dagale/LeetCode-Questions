class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<string,int>mp;
        mp["IV"]=4;
        mp["IX"]=9;
        mp["XL"]=40;
        mp["XC"]=90;
        mp["CD"]=400;
        mp["CM"]=900;
        
        mp["I"]=1;
        mp["V"]=5;
          mp["X"]=10;
          mp["L"]=50;
          mp["C"]=100;
         mp["D"]=500;
        mp["M"]=1000;
        for(int i=0;i<s.size();i++)
        {
            if(i+1<s.size())
            {
                string temp="";
                temp.push_back(s[i]);
                temp.push_back(s[i+1]);
                if(mp.find(temp)!=mp.end())
               {
                    ans=ans+mp[temp];
                    i++;
                    continue;
               }
                
            }
            
            
                string temp="";
                temp.push_back(s[i]);
                ans=ans+mp[temp];
               
            
        }
        return ans;
    }
};