class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt0=0,cnt1=0;
        int n=students.size();
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(students[i]==0) cnt0++;
            else cnt1++;
            q.push(students[i]);
        }
        int i=0;
        while(!q.empty() && i<n)
        {
            if(sandwiches[i]==0 && cnt0==0)
                return q.size();
             if(sandwiches[i]==1 && cnt1==0)
                 return q.size();
            
            if(sandwiches[i]==q.front())
            { 
               q.pop();
                 if(sandwiches[i]==1) cnt1--;
              else cnt0--;
                 i++;
            }
             else 
             {
                 int front=q.front();
                 q.pop();
                 q.push(front);
             }
            
        }
        return 0;
    }
};