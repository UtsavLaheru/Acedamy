f=open("checknum.txt","r") 
num=['1','2','3','4','5','6','7','8','9','0']
data=f.read()
for i in data:
    if i in num:
        print(i)
f.close()