﻿#include <stdio.h>
int n,i,a[100],even=0,odd=0;
int main() {
	
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
		if(a[i]%2==0)
		even++;
		else
		{
			odd++;
		}
	}
	if(even>odd)
	{
		printf("READY FOR BATTLE");
	}
	else
	{
		printf("NOT READY");
	}
	return 0;
}
