t=int(input())
for i in range(t):
	D,d,p,q=map(int,input().split())
	x=D//d
	if x%2==0:
		c=d*((x//2)*(2*p+(x-1)*q))
		c+=(D%d)*(p+x*q)
	else:
		c=d*(x*(p+((x-1)//2)*q))
		c+=(D%d)*(p+x*q)
	print(int(c))