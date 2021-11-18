t=int(input())
for i in range(t):
	a1,a2,a3,a4=map(int,input().split(' '))
	if (a1^a2^a3^a4) == 0:
		print("0")
	if ((a1^a2) & (a1^a3) & (a1^a4)) != 0:
		if ((a2^a3) & (a2^a4) & (a3^a4)) != 0:
			print("2")
	else:
		print("1")