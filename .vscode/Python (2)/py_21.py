import math
n=int(input("Enter Number:"))
flag=0
w=int(math.sqrt(n))
for i in range(2,w+1):
    if n%i==0:
        flag=1
        break
if flag==1:
    print("Number",n,"is Not Prime")
else:
    print("Number",n,"is Prime")      
        