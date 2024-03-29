class RecentCounter {
public:
    stack<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
       int mini=t-3000;
        int ans=0;
        stack<int>q1;
        while(!q.empty() && q.top()>=mini)
        {
            ans++;
            q1.push(q.top());
            q.pop();
        }
        while(!q1.empty())
        {
            q.push(q1.top());
            q1.pop();
        }
        return ans;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */