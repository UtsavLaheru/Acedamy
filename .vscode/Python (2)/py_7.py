LY=int(input("Enter Year:"))
if (LY % 400==0) or (LY % 4==0):
    print("it's a leap year")
else:
    print("it's not a leap year")