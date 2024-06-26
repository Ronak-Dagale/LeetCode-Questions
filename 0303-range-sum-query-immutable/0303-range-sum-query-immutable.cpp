class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            v.push_back(sum);
            
        }
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    }
    
    int sumRange(int left, int right) {
        if(left-1<0) return v[right];
       return v[right]-v[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */