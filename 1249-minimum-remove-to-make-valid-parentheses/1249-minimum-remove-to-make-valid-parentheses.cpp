class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty() && (s[i]=='(' || s[i]==')'))
                st.push({s[i],i});
            else if(s[i]=='(')
            st.push({s[i],i});
            else if(s[i]==')')
            {
                if(st.top().first=='(')
                    st.pop();
                  else
                      st.push({s[i],i});
            }
        }
        string ans="";
        for(int i=s.size()-1;i>=0;i--)
        {
           if(!st.empty() && st.top().second==i)
           st.pop();
            else 
                ans.push_back(s[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};