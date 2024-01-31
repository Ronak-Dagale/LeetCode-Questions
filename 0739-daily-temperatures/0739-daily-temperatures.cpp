class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,-1);
        
        ans[n-1]=n-1;
        
        for(int i=n-2;i>=0;i--)
        {
          if(arr[i+1]>arr[i]) 
              ans[i]=i+1;
            else
            {
                int j=i+1;
                int prev=j;
                while(arr[j]<=arr[i])
                {
                    j=ans[j];
                    
                    if(prev==j)
                        { ans[i]=i;
                        break;
                        }
                    
                    prev=j;      
                }
               if(ans[i]==-1)
                   ans[i]=j;
            }
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=ans[i]-i;
        }
        return ans;
    }
};