t=int(input())
for i in range(t):
	g1,s1,b1,g2,s2,b2=map(int,input().split(' '))
	f=g1+s1+b1
	s=g2+s2+b2
	if f>s:
		print("1")
	else:
		print("2")