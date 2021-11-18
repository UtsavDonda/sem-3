t=int(input())
for i in range(t):
	xa,xb,Xa,Xb=map(int,input().split(' '))
	m=Xa//xa
	n=Xb//xb
	ans=m+n
	print(ans)