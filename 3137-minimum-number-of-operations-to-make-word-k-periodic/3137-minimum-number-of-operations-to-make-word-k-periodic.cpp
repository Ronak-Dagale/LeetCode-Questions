class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string,int>mp;
        for(int i=0;i<word.size();i+=k)
        {
           string temp(word.begin()+i,word.begin()+i+k);
            mp[temp]++;
        }
        int maxi=INT_MIN;
        int cnt=0;
        for(auto v:mp)
        {
            cnt=cnt+v.second;
            if(v.second>maxi)
                maxi=v.second;
        }
        return cnt-maxi;
    }
};