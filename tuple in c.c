#include <stdio.h>
#include <math.h>

int main()
 {
 	
 	int n,i,m,a,r,t;
 	long long int x,y;
	scanf("%d\n",&t);

	for(i=0;i<t;i++)
	{
	scanf("%d %d\n",&n,&m);
	a=pow(2,n)-1;
	x=pow(a,m);
		if(x<1000000007)
		{
			
			r=x%1000000007;
			printf("%lld\n",r);
		}
		else
		{
			y=x%1000000007;
			printf("%lld\n",y);
		}
	}
return 0;
}
