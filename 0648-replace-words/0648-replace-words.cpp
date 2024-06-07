class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>s;
        for(int i=0;i<dictionary.size();i++)
            s.insert(dictionary[i]);
        
        int i=0;
        string ans="";
        while(i<sentence.size())
        {
            string s1="";
            while(i<sentence.size() && sentence[i]!=' ')
            {
                s1.push_back(sentence[i]);
                if(s.find(s1)!=s.end()){
                    break;
                }
                i++;
            }
            ans+=s1;
            while(i<sentence.size() && sentence[i]!=' ')i++;
            if(i<sentence.size()) ans.push_back(' ');
            
            i++;
        }
        return ans;
    }
};