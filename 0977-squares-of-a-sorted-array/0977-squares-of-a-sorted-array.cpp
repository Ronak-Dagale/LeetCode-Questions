class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=0;
        int k=0;
        
        while(j<nums.size() && nums[j]<0)
            j++;
        
        i=j;
        i--;
        vector<int>ans;
        while(i>=0 || j<nums.size())
        {
           if(i>=0 && j<nums.size())
           {
               int e1=-nums[i];
               int e2=nums[j];
               
               if(e1<e2)
               {
                   ans.push_back(e1*e1);
                   i--;
               }
               else
               {
                   ans.push_back(e2*e2);
                   j++;
               }
           }
            else if(i>=0)
            {
                int e1=-nums[i];
                ans.push_back(e1*e1);
                   i--;
            }
            else
            {
               int e2=nums[j]; 
                ans.push_back(e2*e2);
                   j++;
            }
        }
        return ans;
    }
};