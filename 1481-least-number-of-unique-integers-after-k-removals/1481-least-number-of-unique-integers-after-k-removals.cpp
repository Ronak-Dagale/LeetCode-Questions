class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        mp[arr[i]]++;
        
        vector<pair<int,int>>v;
        for(auto x:mp)
        {
            pair<int,int>p={x.second,x.first};
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        
        int res=0;
        for(int i=0;i<v.size();i++)
        {
            if(k-v[i].first>=0)
            {
                res++;
                k=k-v[i].first;
            }  
            else
                break;
            
            //cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        return v.size()-res;
    }
};