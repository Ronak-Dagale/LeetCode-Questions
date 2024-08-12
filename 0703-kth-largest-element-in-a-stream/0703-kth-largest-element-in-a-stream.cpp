class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>q;
    int kg;
    KthLargest(int k, vector<int>& nums) {
        kg=k;
       for(auto v:nums)
       {
           q.push(v);
           if(q.size()>k)  q.pop();
       }
    }
    int add(int val) {
      q.push(val);
        if(q.size()>kg) q.pop();
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */