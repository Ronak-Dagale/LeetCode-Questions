class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // instead of string each charachter 
        // store the index of previous occurance
        
        vector<int>id1(200,-1);
        vector<int>id2(200,-1);
        
        for(int i=0;i<s.size();i++)
        {
            if(id1[s[i]]!=id2[t[i]])
                return 0;
            
            id1[s[i]]=i+1;
            id2[t[i]]=i+1;
        }
        
        return 1;
    }
};