file=input('enter file name:')
f=open(file,'r')
data=f.read()
print(data)
for i in range(97,123):
    var=chr(i)
    l=data.count(var)
    print(var,':',l,'times')
f.close