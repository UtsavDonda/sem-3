﻿t=int(input())
for i in range(t):
	a,b=map(int,input().split(' '))
	c=a+b
	if c<3:
		print("1")
	elif c<=10:
		print("2")
	elif c<=60:
		print("3")
	else :
		print("4")
	