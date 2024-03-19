class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>fre(26,0);
        
        for(int i=0;i<tasks.size();i++)
            fre[tasks[i]-'A']++;
        
        priority_queue<int>q;
        for(int i=0;i<26;i++)
        {
            if(fre[i]!=0)
                q.push(fre[i]);
        }
        
        int ans=0;
        while(!q.empty())
        {
            int time=0;
            vector<int>tmp;
            for(int i=0;i<n+1;i++)
            {
                if(!q.empty())
                {
                    tmp.push_back(q.top()-1);
                    q.pop();
                    time++;
                }
            }
            
            for(auto t:tmp)
            {
                if(t) q.push(t);
            }
            ans=ans+(q.empty()?time:n+1);
        }
        return ans;
    }
};