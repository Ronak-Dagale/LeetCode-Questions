class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        
        vector<int>result(deck.size());
        deque<int>d;
        
        for(int i=0;i<deck.size();i++)
            d.push_back(i);
        
        for(int i=0;i<deck.size();i++)
        {
            int id=d.front();
            d.pop_front();
            result[id]=deck[i];
            
            if(!d.empty())
            {
            d.push_back(d.front());
                d.pop_front();
                
            }
        }
        return result;
    }
};