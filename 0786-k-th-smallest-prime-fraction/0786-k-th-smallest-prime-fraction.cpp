class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        
         vector<pair<int, int>> fractions; 
        
        for (int i = 0; i < arr.size(); ++i) {
            for (int j = i + 1; j < arr.size(); ++j) {
                fractions.push_back({arr[i], arr[j]});
            }
        }

        // Sort the vector based on the fractions' values
        sort(fractions.begin(), fractions.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.first * b.second < b.first * a.second;
             });

        // Return the kth smallest prime fraction
        return {fractions[k - 1].first, fractions[k - 1].second};
    }
    
};