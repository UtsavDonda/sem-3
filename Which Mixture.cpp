/*
A mixture is called a:

1) A solution if A>0 and B>0,

2) A solid if B=0, or

3) A liquid if A=0.
*/
#include <iostream>
using namespace std;
int main()
{
	int i,n,t,a,b;
	cin>>t;
for(i=0;i<t;i++){
	cin>>a>>b;
if(a==0)
{
cout<<"Liquid"<<endl;
}
else if(b==0){cout<<"Solid"<<endl;}

else
{
	cout<<"Solution"<<endl;
}
}
return 0;
}
