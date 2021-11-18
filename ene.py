import math
t=int(input())
for i in range(t):
	e,k=map(int,input().split(' '))
	count=0
	a=math.floor(e/k)
	if e>k:
		for j in range(1000):
			a=math.floor(a/k)	
			if a!=0 :
				count=count+1
			if a==0:
				count=count+1
				break;
		print(count+1)
	else :
		print(count+1)