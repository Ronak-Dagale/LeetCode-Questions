class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int>fre(1001,0);
        if(target.size()!=arr.size()) return 0;
        
        for(int i=0;i<target.size();i++)
        {
            fre[target[i]]++;
            fre[arr[i]]--;
        }
        
        for(int i=0;i<1001;i++)
        {
           if(fre[i]!=0) return 0;
        }
        return 1;
        }
};