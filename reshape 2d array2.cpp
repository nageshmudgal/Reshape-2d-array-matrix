#include <iostream>
using namespace std;
int main()
{
	int a,b,c,x,y,i;
	cout<<"enter matrix size";
	cin>>a>>b;
	c=a*b;
	int arr[c];
	cout<<"enter reshape matrix size";
	cin>>x>>y;
	if(c==x*y)
	{
		cout<<"enter matrix";
	    for(i=1;i<=c;i++)
	    {
		    cin>>arr[i];
	    }
	    for(i=1;i<=c;i++)
	    {
		    cout<<arr[i]<<" ";
		    if(i%b==0)
		    {
			    cout<<endl;
		    }
	    }
	
	    cout<<"reshaped matrix: "<<endl;
	    for(i=1;i<=c;i++)
	    {
		    cout<<arr[i]<<" ";
		    if(i%y==0)
		    {
			    cout<<endl;
		    }
	    }
		
	}
	else{
		cout<<"invalid input";
	}
	return 0;
}
