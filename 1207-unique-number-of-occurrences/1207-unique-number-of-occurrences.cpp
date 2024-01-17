class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp,mp1;
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        
        for(auto v:mp)
        {
            int x=v.second;
            mp1[x]++;
            if(mp1[x]>1)
                return 0;
        }
        return 1;
    }
};