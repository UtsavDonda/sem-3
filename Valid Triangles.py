t=int(input())
for i in range(t):
	a,b,c=map(int,input().split(' '))
	ans=a+b+c
	if ans==180:
		print("YES")
	else :
		print("NO")