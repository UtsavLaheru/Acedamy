def fibo(n=0-1,n1=0,n2=1):
    if n==0:
        return 1
    else:
        n3=n1+n2
        print(n3)
        n1=n2
        n2=n3
        return (fibo(n-1,n1,n2))
n=int(input("Enter Number:"))
print(0)
print(1)
fibo(n-2)