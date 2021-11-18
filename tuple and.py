import math
t=int(input())
for i in range(t):
	n,m=map(int,input().split(' '))
	a=(math.pow(2,n)-1)
	x=math.pow(a,m)
	if(x<(math.pow(10,9)+7)):
		print(int(x))
	else:
		y=x%(math.pow(10,9)+7)
		print(int(y))