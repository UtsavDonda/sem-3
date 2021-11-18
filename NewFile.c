#include <stdio.h>
int main(){
	int a,t,ans=0,i;
	int b;
	int c;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{ans=0;
		scanf("%d %d %d\n",&a,&b,&c);
	if(a==1 & b==1 & c==1)
		{	printf("1\n");}
	else if(a==1 & b==0 & c==1)
		{	printf("0\n");}
	else if(a==0 & b==1 & c==1)
		{	printf("0\n");}
	else if(a==0 & b==0 & c==1)
		{	printf("1\n");}
	else if(a==1 & b==1 & c==0)
		{	printf("0\n");}
	else if(a==1 & b==0 & c==0)
		{	printf("1\n");}
	else if(a==0 & b==1 & c==0)
		{	printf("1\n");}
	else
		{	printf("0\n");}
	
	}
	
	

	return 0;
}
