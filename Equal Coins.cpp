#include <iostream>
using namespace std;
int main()
{

int x,y,t,sum;
cin>>t;
for(int i=0;i<t;i++){

cin>>x>>y;
sum=x+y;
if(sum%2==0)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}