for i in range(int(input())):
     n, m = map(int,input().split())
     c = pow(2,n,1000000007)-1
     print(pow(c,m,1000000007))
