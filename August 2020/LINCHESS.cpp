#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    long long int a[1000000];
	    long long int res[1000000]={0};
        long long int min=0;

	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(k%a[i]==0)
	        {
	           res[i]=k/a[i];
	        }

	        else
	        {
	            res[i]=-1;
	        }
	    }

	   min=INT_MAX;
	   int minindex=-1;
	   for(int i=0;i<n;i++)
	   {
	       if(res[i]<min&&res[i]!=-1)
	       {
	        min=res[i];
	        minindex=i;
	       }
	   }
	   if(minindex!=-1){
	       cout<<a[minindex]<<endl;
	   }
	   else cout<<-1<<endl;
	}
	return 0;

}
