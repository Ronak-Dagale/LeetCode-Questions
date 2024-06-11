class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        sort(arr1.begin(),arr1.end());
        int i=0,j=0;
        while(j<arr2.size())
        {
            i=0;
           while(i<arr1.size() && arr1[i]<=arr2[j])
           {
               if(arr1[i]==arr2[j]){
                   ans.push_back(arr1[i]);
                   arr1[i]=-1;
               }
               i++;
           }
            j++;
        }
        i=0;
        while(i<arr1.size())
        {
           if(arr1[i]!=-1)
               ans.push_back(arr1[i]);
            i++;
        }
        return ans;
    }
};