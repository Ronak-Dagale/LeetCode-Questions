class Solution {
public:
    static bool cmp(pair<int,char>a,pair<int,char>b)
    {
        if(a.first>=b.first) return 1;
        else
            return 0;
    }
    string frequencySort(string s) {
       vector<pair<int,char>>fre(62,pair<int,char>(0,' '));
        
        for(int i=0;i<s.size();i++)
        {
          
            int id=0;
            if(s[i]>='a' && s[i]<='z')
            {
                id=s[i]-'a';
                id=id+10;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                id=s[i]-'A';
                id=id+36;
            }
            else
            {
                id=s[i]-'0';
            }
             // pair<int,char>p=fre[id];
              fre[id].first=fre[id].first+1;
              fre[id].second=s[i];
        }
        sort(fre.begin(),fre.end());
        
        // for(int i=0;i<52;i++)
        // {
        //     cout<<fre[i].first<<" "<<fre[i].second<<endl;
        // }
        string ans="";
    
        for(int i=61;i>=0;i--)
        {
           pair<int,char>p=fre[i];
            if(p.second==' ')
                continue;
            
            int n=p.first;
            int ch=p.second;
            
            for(int i=0;i<n;i++)
                ans.push_back(ch);
        }
        return ans;
    }
};