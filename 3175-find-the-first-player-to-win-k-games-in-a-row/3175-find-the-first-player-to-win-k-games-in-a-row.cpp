class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        deque<int>q;
        for(int i=0;i<skills.size();i++) q.push_back(i);
        if(k>skills.size())
        {
            int ans=-1;
            int maxi=INT_MIN;
            for(int i=0;i<skills.size();i++)
            {
                if(maxi<skills[i])
                {
                    maxi=skills[i];
                    ans=i;
                }
            }
            return ans;
        }
        int cnt=0;
        int prev=-1;
        while(!q.empty())
        {
           int c1=q.front();
            q.pop_front();
            int c2=q.front();
            q.pop_front();
            
            if(skills[c1]>skills[c2])
            {
                if(prev==c1)
                {
                    cnt++;
                    if(cnt==k) return c1;
                }
                else
                {
                    cnt=1;
                    prev=c1;
                     if(cnt==k) return c1;
                }
                q.push_front(c1);
                q.push_back(c2);
            }
            else
            {
                if(prev==c2)
                {
                    cnt++;
                    if(cnt==k) return c2;
                }
                else
                {
                    cnt=1;
                    prev=c2;
                     if(cnt==k) return c2;
                }
                q.push_front(c2);
                q.push_back(c1);
            }
        }
        return -1;
    }
};