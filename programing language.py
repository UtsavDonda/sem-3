for _ in range(int(input())):
	arr=list(map(int,input().split()))
	f=set(arr[:2])
	a=set(arr[2:4])
	b=set(arr[4:6])
	if(f==a):
		print("1")
	elif(f==b):
		print("2")
	else:
		print("0")