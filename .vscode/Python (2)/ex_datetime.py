import datetime
a=datetime.date.today().month      #time subtracted in month
b=datetime.date(2006,4,29).month
print(a)
print(b)
c=a-b
print(abs(c))


a1=datetime.date.today().year       #time subtracted in year
b1=datetime.date(2006,4,29).year
print(a1)
print(b1)
c1=a1-b1
print(c1)


a2=datetime.date.today().day       #time subtracted in day
b2=datetime.date(2006,4,29).day
print(a2)
print(b2)
c2=a2-b2
print(abs(c2))

print("Difference in years:",c1,"months:",abs(c),"days:",abs(c2))

