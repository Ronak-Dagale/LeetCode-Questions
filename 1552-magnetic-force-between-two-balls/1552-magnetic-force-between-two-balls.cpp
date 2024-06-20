class Solution {
public:
    bool ispos(vector<int>&arr,int m,int mid)
    {
        int ball=1;
        int cnt=1;
        int prev=arr[0];
        int i=0;
        
        while(i<arr.size() && cnt<m)
        {
            if(arr[i]-prev<mid)
            {
              i++;
            }
            else
            {
              prev=arr[i];
                cnt++;
                i++;
                // if(i+1<arr.size() && cnt<m) return 0;
            }
            if(cnt>=m) return 1;
        }
        return 0;
    }
    int maxDistance(vector<int>& position, int m) {
       
        sort(position.begin(),position.end());
         int low=0,high=position[position.size()-1];
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
          // cout<<low<<high<<endl;
            if(ispos(position,m,mid))
            {
               // cout<<1<<mid<<endl;
                ans=mid;
               low=mid+1;
            }
            else
            {
                high=mid-1;
                //cout<<0<<mid<<endl;
            }
               
        }
        return ans;
    }
};