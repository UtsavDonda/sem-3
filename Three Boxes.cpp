/*A≤B≤C≤D
3
2 3 5 10
1 2 3 5
3 3 4 4
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i,n,t,a,b,c,d;
	float sum,div;
	cin>>t;
for(i=0;i<t;i++){
	cin>>a>>b>>c>>d;
if(a<=b && b<=c && c<=d){
if(a>0 && b>0 && c>0 && d>0){
sum=a+b+c;
div=sum/d;
cout<<ceil(div)<<endl;
	}
}
}
return 0;
}
