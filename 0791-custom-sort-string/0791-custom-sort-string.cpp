class Solution {
public:
    string customSortString(string order, string s) {
          vector<int> fre(26);
       
        for(int i=0;i<s.length();i++){
            fre[s[i]-'a']++;
        }
        string out="";
      
        for(int i=0;i<order.length();i++){
            out.append(fre[order[i]-'a'], order[i]);
         
            fre[order[i]-'a']=0;
        }
       
        for(int i=0;i<26;i++){
            out.append(fre[i], 'a'+i); 
        }
        return out;
    }
};