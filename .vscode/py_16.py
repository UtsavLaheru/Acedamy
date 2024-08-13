j = str(input("Enter String:"))
zero,one,two,three,four,five,six,seven,eigth,nine=0,0,0,0,0,0,0,0,0,0
for i in j:
    if(i=='0'):
        zero=zero+1
    if(i=='1'):
        one=one+1
    if(i=='2'):
        two=two+1
    if(i=='3'):
        three=three+1
    if(i=='4'):
        four=four+1
    if(i=='5'):
        five=five+1
    if(i=='6'):
        six=six+1
    if(i=='7'):
        seven=seven+1
    if(i=='8'):
        eigth=eigth+1
    if(i=='9'):
        nine=nine+1
if(zero!=0):
    print("0 (",zero,"time)")
if(one!=0):
    print("1 (",one,"time)")
if(two!=0):
    print("2 (",two,"time)")
if(three!=0):
    print("3 (",three,"time)")
if(four!=0):
    print("4 (",four,"time)")
if(five!=0):
    print("5 (",five,"time)")
if(six!=0):
    print("6 (",six,"time)")
if(seven!=0):
    print("7 (",seven,"time)")
if(eigth!=0):
    print("8 (",eigth,"time)")
if(nine!=0):
    print("9 (",nine,"time)")