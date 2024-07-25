class Solution {
public:
    void merge(vector<int>&nums,int s,int mid,int e)
    {
        vector<int>l,r;
        
        for(int i=s;i<=mid;i++)
            l.push_back(nums[i]);
        for(int i=mid+1;i<=e;i++)
            r.push_back(nums[i]);
        
        int k=s;
        int i=0,j=0;
        
        while(i<l.size() || j<r.size())
        {
             if(i<l.size() && j<r.size())
             {
                 if(l[i]<r[j])
                     nums[k++]=l[i++];
                 else
                     nums[k++]=r[j++];
             }
            else if(i<l.size())
                nums[k++]=l[i++];
            else
                nums[k++]=r[j++];
        }
    }
    void mergesort(vector<int>&nums,int s,int e)
    {
          if(s<e)
          {
            int mid=s+(e-s)/2;
              mergesort(nums,s,mid);
              mergesort(nums,mid+1,e);
              
              merge(nums,s,mid,e);
          }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};