class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        
        int n=s.size();
        for(int i=n-1;i>=0;)
        {
            while(i>=0 && s[i]==' ')
                i--;
            
            string temp="";
            while(i>=0 && s[i]!=' ')
            {
                temp.push_back(s[i]);
                i--;
            }
            reverse(temp.begin(),temp.end());
            // if(temp.size()!=0 && i>=0)
            // {
            //     cout<<i<<endl;
            //     temp.push_back(' ');
            //     ans=ans+temp;
            // }
            // else if(temp.size()!=0)
            //    ans=ans+temp;
            if(i>=0 && s[i]==' ')
                temp.push_back(s[i]);
            
            if(temp.size()!=0)
            {
                ans=ans+temp;
            }
                
        }
        int size=ans.size();
        if(ans[size-1]==' ')
            ans.pop_back();
        return ans;
    }
};