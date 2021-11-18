t=int(input())
ls=[ ]
for i in range(t):
	n=int(input())
	ls.append(n)
ls.sort()
for j in range(t):
	print(ls[j])