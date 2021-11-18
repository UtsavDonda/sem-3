q=int(input())
for i in range(q):
	cs=0
	ct=0
	n=int(input())
	s=input()
	t=input()
	for j in range(len(s)):
		if s[j]=="1":
			cs=cs+1
	for k in range(len(t)):
		if t[k]=="1":
			ct=ct+1
	print(min(cs,ct))