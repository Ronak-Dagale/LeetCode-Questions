class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
      priority_queue<pair<int,string>>q;
      int n=names.size();
        
        for(int i=0;i<n;i++)
        q.push({heights[i],names[i]});
        
        int i=0;
        while(!q.empty())
        {
            names[i++]=q.top().second;
            q.pop();
        }
        return names;
    }
};