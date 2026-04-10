n=int(input("How Many Times You Want To Enter A Value:"))
total=0
for i in range(n):
    value=int(input("Enter Value:"))
    total=total+value
avg=total/n
print("Average is:",avg)
