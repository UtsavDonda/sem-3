#include <stdio.h>
int i,t;
int a1,a2,a3,a4;
int main(){

	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
	}
	
		if (((a1^a2) && (a1^a3) && (a1^a4)) != 0)
	{
		if (((a2^a3) && (a2^a4) & (a3^a4)) != 0)
		{	printf("2");}
	}

 return 0;
}
