class Solution {
public:
    bool solve(vector<int>& hand,int s,int id,int n)
    {
        int next=hand[id]+1;
        int cnt=1;
        hand[id]=-1;
        while(id<hand.size() && cnt<n)
        {
          if(hand[id]==next){
              next=hand[id]+1;
              hand[id]=-1;
              cnt++;
          }
          id++;
        }
        return cnt==n;
    }
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return 0;
        
        sort(hand.begin(),hand.end());
        for(int i=0;i<hand.size();i++)
        {
         if(hand[i]>=0)
         {
             if(!solve(hand,hand.size(),i,groupSize)) return 0;
         }
        }
        return 1;
    }
};