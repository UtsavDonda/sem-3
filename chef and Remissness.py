t=int(input())
for i in range(t):
	a,b=map(int,input().split(' '))
	if a>b:
		c=a
	else:
		c=b
	print(c,a+b)