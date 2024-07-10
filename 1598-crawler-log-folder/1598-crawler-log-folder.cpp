class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for(int i=0;i<logs.size();i++)
        {
          if(logs[i][0]=='.')
          {
            if(logs[i][1]=='.')
                ans--;
              
              if(ans<0) ans=0;
          }
          else
            ans++; 
        }
        return ans<0? 0:ans;
    }
};