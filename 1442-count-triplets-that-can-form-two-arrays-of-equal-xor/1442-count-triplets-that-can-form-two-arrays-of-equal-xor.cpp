class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans=0;
        
        int j=0;
        for(int i=0;i<arr.size();i++)
        {
           int val=arr[i];
            for( j=i+1;j<arr.size();j++)
            {
                val^=arr[j];
                 if(val==0)
                ans=ans+(j-i);
            }
           
        }
        return ans;
    }
};


