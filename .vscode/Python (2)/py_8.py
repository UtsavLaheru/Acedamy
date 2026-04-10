cm = int(input("Enter cm:"))
kg = int(input("Enter kg:"))
bmi = kg/(cm/100)**2
if (25 >= bmi < 19):
    print("You Are Healthy")
elif (bmi >= 19):
    print("You Are Underweight")
else:
    print("Your Are Overweight")
