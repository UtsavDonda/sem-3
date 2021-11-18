from math import sqrt
t=int(input())
ls=[ ]
for i in range(t):
	n=int(input())
	ls.append(int(sqrt(n)))
for i in range(t):
	print(ls[i])