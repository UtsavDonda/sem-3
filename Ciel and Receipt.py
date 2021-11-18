t=int(input())
for i in range(t):
	flag=0
	n=int(input())
	for m in range(2**10):
		if 2**m-1>=n:
			num=2**m-2
			flag=flag+1
			n=n-num
	print(flag)
		