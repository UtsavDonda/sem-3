t=int(input())
ls= [ ]
for i in range(t):
   a,b= (input().split())
   a=int(a)
   b=int(b)
   ls.append(a%b)
for i in range(t):
	print(ls[i])