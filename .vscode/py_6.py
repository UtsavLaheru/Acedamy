import cmath
b=int(input("Enter B:"))
a=int(input("Enter A:"))
c=int(input("Enter C:"))

D=b*b-4*a*c

R=(-b-cmath.sqrt(D))/2*a

print(D)
print(R)