//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/
#include<vector>
class Solution {
public:
bool ispalin(int n)
{
   int reverse=0;
   int temp=n;
   
   while(temp)
   {
       reverse=(reverse*10)+temp%10;
       temp=temp/10;
   }
   return reverse==n;
}
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++)
    	{
    	    if(!ispalin(a[i]))
    	    return 0;
    	}
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends