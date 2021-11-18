#include <iostream>
using namespace std;
int main()
{
int x,y,a,b,k,p,d,t;
cin>>t;
for(int i=0;i<t;i++){

cin>>x>>y>>a>>b>>k;
p=x+k*a;
d=y+k*b;
if(p<d)
{
    cout<<"PETROL"<<endl;
}
else if(d<p){
cout<<"DIESEL"<<endl;
}
else{
    cout<<"SAME PRICE"<<endl;
}
}
    return 0;
}