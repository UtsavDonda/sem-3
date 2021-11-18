t=int(input())
for i in range(t):
	c1=0
	c0=0
	s=input()
	for j in range(len(s)):
		if s[j]==" ":
			continue
		if s[j]=="1":
			c1=c1+1
			print(c1)
		else:
			c0=c0+1
			print(0)
	if (c1>c0):
			print("YES")
	else:
			print("NO")                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          