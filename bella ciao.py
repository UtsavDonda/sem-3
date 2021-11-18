t=int(input())
for i in range(t):
	D,d,p,q=map(int,input().split(' '))
	sum=0
	sum1=0
	n=float(D/d)
	sum=((d*(D//d))/2)*(2*p+((D//d)-1)*q)
	sum1=sum+p+q*q
	if (n%2==0):
		print(int(sum))
	else :
		print(int(sum1))