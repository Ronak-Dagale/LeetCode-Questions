class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>end(deadends.begin(),deadends.end());
        
        if(end.count("0000")) return -1;
        
        queue<pair<string,int>>q;
        unordered_set<string>vis;
        vis.insert("0000");
        q.push({"0000",0});
        
        while(!q.empty())
        {
            string curr=q.front().first;
            int move=q.front().second;
            q.pop();
            
            if(curr==target)
                return move;
            
            int del[]={-1,1};
            
            for(int i=0;i<4;i++)
            {
                for(int j=0;j<2;j++)
                {
                   int z=(curr[i]-'0'+del[j]+10)%10;
                    string newcurr=curr;
                    newcurr[i]=z+'0';
                    
                    if(vis.find(newcurr)==vis.end() && end.find(newcurr)==end.end())
                    {
                        vis.insert(newcurr);
                        q.push({newcurr,move+1});
                    }
                }
            }
        }
        return -1;
    }
};