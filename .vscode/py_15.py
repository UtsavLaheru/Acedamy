i = int(input("Enter Number of item you want:"))
listy = []
# list inputer
for j in range(0, i):
    n = int(input("Enter element:"))
    listy.append(n)
# finding Negitive
print("Negitive Numbers:-")
for p1 in listy:
    if (p1 < 0):
        print(p1)
    else:
        print("none")
# finding Positive
print("Positive Numbers:-")
for p2 in listy:
    if (p2 > 0):
        print(p2)
    else:
        print("none")

# finding Zeros
p = 0
for p3 in listy:
    if (p3 == 0):
        p = p+1
print("Number of zeros:-",p)

# finding Odd Number
print("Odd Number:-")
for p4 in listy:
    if (p4 % 2 != 0):
        print(p4)
        
# finding Even Number
print("Even Number:-")
for p5 in listy:
    if (p5 % 2 == 0):
        print(p5)

# finding Average Number
print("Average Number:-")
t=0
for p6 in listy:
    t=t+p6
avg=t/i
print(avg)

