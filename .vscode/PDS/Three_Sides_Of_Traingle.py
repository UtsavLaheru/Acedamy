import math
a = input("Please Enter Side A of the Triangle:")
b = input("Please Enter Side B of the Triangle:")
c = input("Please Enter Side C of the Triangle:")
a = float(a)
b = float(b)
c = float(c)
if(a+b>c) and (a+c>b) and (b+c>a):
    s=(a+b+c)/2
    area = math.sqrt(s*(s-a)*(s-b)*(s-c))
    print("The area of triangle in sides {0}, {1},  {2} is {3:.2f}".format(a,b,c,area))
else:
    print("The give sides of {0}, {1}, {2} do not form a vaild Traingle.".format(a,b,c))