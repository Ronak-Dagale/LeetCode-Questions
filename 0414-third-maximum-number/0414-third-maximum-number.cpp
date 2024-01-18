class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int a=INT_MIN,b=INT_MIN,c=INT_MIN,d=INT_MIN;
        a=a-4;
        b=b-4;
        c=c-4;
        d=d-4;
         bool flag=1;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]==a || nums[i]==b || nums[i]==c))
                continue;
            
            
            if(nums[i]>a)
            {
                c=b;
                b=a;
                a=nums[i];
            }
            else if(nums[i]>b)
            {
                c=b;
                b=nums[i];
            }
            else if(nums[i]>c)
            {
                c=nums[i];
            }
            
            if(c!=d)
                flag=0;
        }
        if(flag)
            return a;
        return c;
    }
};