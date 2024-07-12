class Solution {
public:
    string solve(string s,int point,int &ans,char first,char second)
    {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==second)
            {
                if(!st.empty() && st.top()==first)
                {
                    st.pop();
                    ans+=point;
                }
                else
                    st.push(s[i]);
            }
            else
            st.push(s[i]);
        }
        
        string temp="";
        while(!st.empty())
        {
          temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
    int maximumGain(string s, int x, int y) {
        int ans=0;
        if(x>y)
        {
           string temp=solve(s,x,ans,'a','b');
           solve(temp,y,ans,'b','a');
        }
        else
        {
            string temp=solve(s,y,ans,'b','a');
            solve(temp,x,ans,'a','b');
        }
        return ans;
    }
};