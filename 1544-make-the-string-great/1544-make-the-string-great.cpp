class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            st.push(s[i]);
            else if(st.top()==s[i]+32 || st.top()+32==s[i])
             st.pop();
              else
                st.push(s[i]);
        }
        s="";
        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};