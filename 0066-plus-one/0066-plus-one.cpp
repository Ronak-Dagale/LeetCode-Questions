class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int n=digits.size()-1;
        
        int sum=0;
        int carry=0;
        
        sum=digits[n]+1;
        carry=sum/10;
        ans.push_back(sum%10);
        
        for(int i=n-1;i>=0;i--)
        {
            sum=digits[i]+carry;
            carry=sum/10;
            ans.push_back(sum%10);
        }
        
        if(carry!=0)
            ans.push_back(carry);
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};