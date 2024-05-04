class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans=0;
        int i=0,j=people.size()-1;
        
        sort(people.begin(),people.end());
        while(i<=j)
        {
            if(people[j]+people[i]<=limit)
            {
                ans++;
                i++;
                j--;
            }
            else if(people[j]<=limit)
            {
                j--;
                ans++;
            }
        }
        return ans;
    }
};