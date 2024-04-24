class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int>s;
        
        for(int i=0;i<arr.size();i++)
        {
            if(s.empty())
                s.push(arr[i]);
            else
            {
                if(s.top()<0)
                {
                    s.push(arr[i]);
                }
                else
                {
                    if(arr[i]>0)
                        s.push(arr[i]);
                    else
                    {
                        int flag=1;
                        while(!s.empty() && s.top()>0)
                        {
                             if(s.top()==abs(arr[i]))
                             {
                                 flag=0;
                                 s.pop();
                                 break;
                             }
                             else if(s.top()>abs(arr[i]))
                             {
                                 flag=0;
                                 break;
                             }
                              else
                                  s.pop();
                        }
                        if(flag)
                        {
                            s.push(arr[i]);
                        }
                    }
                }
            }
        }
        
        vector<int>ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};