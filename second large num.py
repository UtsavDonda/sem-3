t=int(input())
ls= [ ]
for i in range(t):
	a,b,c=input().split(' ')
	ls.append(int(a))
	ls.append(int(b))
	ls.append(int(c))
	ls.sort()
	print(ls[1])
	ls.pop(0)
	ls.pop(1)
	ls.pop()