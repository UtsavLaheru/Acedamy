def emi(p, r, n):
    mr = r/(12*100)
    emii = p*mr*(1+mr)**n/(((1+mr)**n)-1)
    print("EMI:", emii)
    total = emii*n
    print("total:", total)
    outstanding = p
    for i in range(1, n+1):
        print("period:", i,"\n",end='')
        print(" interest:", outstanding*mr,"\n",end='')
        print(" principle:", emii-(outstanding*mr),"\n",end='')
        print(" outstanding", outstanding)
    outstanding -= emii-(outstanding*mr)
lamount = int(input('enter amount: '))
rate = float(input('enter rate: '))
time = int(input('enter time(in years): '))
emi(lamount, rate, time*12)
