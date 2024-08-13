import random
print(random.random())          #can't set starting and ending point in random.random()
print(random.randint(1,10))     #can set start and end point in random.randint(a,b)
c1=['1','2','3','4','5','6']
c2=random.choice(c1)            #choice needs list in which it can choice randomly random.choice(seq)
print(c2)
random.shuffle(c1)              #shuffle the list in which it can't be used by another variable like choice,radint can do with c2 random.shuffle(x)
print(c1)
c3=random.randrange(1,10)       #it's same as randint but the end term is n-1 so random in randrange is upto 1 to 9
print(c3)

