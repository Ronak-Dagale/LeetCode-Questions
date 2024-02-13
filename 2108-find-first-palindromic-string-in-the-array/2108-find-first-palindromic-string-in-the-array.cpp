class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            string temp=words[i];
            bool flag=1;
            int s=0,e=temp.size()-1;
            
            while(s<e)
            {
                if(temp[s]!=temp[e])
                {
                    flag=0;
                    break;
                }
                s++;
                e--;
            }
            if(flag)
                return temp;
        }
        return "";
    }
};