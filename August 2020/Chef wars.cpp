#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int h,p;
	    cin>>h>>p;

	  while((h>0)&&(p>0))
	    {
	        h=h-p;
	        p=p>>1;
	    }

	    if(h<=0)
	        cout<<1;
	   else
	    cout<<0;

	  cout<<"\n";
	}
	return 0;
}
