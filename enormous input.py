t,n= map(int,input().split(" "))
print(t,n)
count=0
for i in range(t):
	a=int(input())
	if (a%n==0):
		count=count+1
	i=i+1
print(count)