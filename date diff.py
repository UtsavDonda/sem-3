t=int(input())
for i in range(t):
	d1,m1,y1=map(int,input().split(' '))
	d2,m2,y2=map(int,input().split(' '))
	if(y2-y1<0):
		print("1000")
	elif(m2-m1<0):
		print(abs(500*(m2-m1)))
	elif(d2-d1<0):
		print(abs(15*(d2-d1)))
	else:
		print("0")