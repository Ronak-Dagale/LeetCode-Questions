class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i=0,cnt=0;
        while(i<arr.size())
        {
            if(arr[i]&1)cnt++;
            else cnt=0;
            
            if(cnt==3) return 1;
            i++;
        }
        return 0;
    }
};