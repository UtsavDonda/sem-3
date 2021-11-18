t=int(input())
for i in range(t):
	d,x,y,z=map(int,input().split(' '))
	w1=7*x
	w2=d*y+z*(7-d)
	print(max(w1,w2))