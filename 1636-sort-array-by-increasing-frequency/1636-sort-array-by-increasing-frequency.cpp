class Solution {
public:
    
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>fre1(101,0);
        vector<int>fre2(101,0);
        
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]<0)
               fre1[-nums[i]]++;
            else
                fre2[nums[i]]++;
        }
         
      sort(nums.begin(),nums.end(),[&](int a,int b)
           {
               int fa,fb;
               if(a<0)
                   fa=fre1[-a];
                else
                    fa=fre2[a];
               
               if(b<0)
                   fb=fre1[-b];
               else
                   fb=fre2[b];
               
               if(fa!=fb)
                   return fa<fb;
               else
                   return a>b;
           });
       return nums;
       
    }
};