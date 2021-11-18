#include <iostream>
using namespace std;
int main()
{
int s1[100],s2[100],s[100],l=0,n,i,max=-32687;
cin>>n;
// take value
for(i=0;i<n;i++){
cin>>s1[i]>>s2[i];
}
// find substraction and save in s array
for(i=0;i<n;i++){
s[i]=abs(s1[i]-s2[i]);
}
// in s array find max number
for(i=0;i<n;i++){
if(s[i]>max){
max=s[i];
}
}
for(i=0;i<n;i++)
{if(s[i]==max){
    if (s1[i]>s2[i])
    {l=1;
    }
    else{
        l=2;
    } 
}
}
cout<<l<<" "<<max;
return 0;
}