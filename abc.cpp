#include <iostream>
using namespace std;
int main()
{
	int i,n,t,j,count=0,sum=0;
	cin>>t;
for(i=0;i<t;i++){
	cin>>n;
	sum=0;
	for(j=1;j<=n;j++)
	{
		sum=sum+j;
	}
	if(sum%2==0){
		cout<<n<<endl;}
	else{
			cout<<n-1<<endl;}
	}
		
		
return 0;
}
