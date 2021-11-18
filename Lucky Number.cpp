#include <iostream>
using namespace std;
int main()
{
int t,a,b,c,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a>>b>>c;
		if(a-7==0 || b-7==0 || c-7==0)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
			}
	}

return 0;
	}
