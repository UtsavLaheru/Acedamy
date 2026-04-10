import random
choose=["0","1","2"]
user=int(input("Enter Choice:-"))
ai=random.randint(0,2)
if user==0:
    print("user:- Rock")
elif user==1:
    print("user:- Scissor")
elif user==2:
    print("user:- Paper")
else:
    print("Entered Number is Not in the choice")

if ai==0:
    print("ai:- Rock")
elif ai==1:
    print("ai:- Scissor")
elif ai==2:
    print("ai:- Paper")

if user==0 and ai==0 or user==1 and ai==1 or user==2 and ai==2:
    print("Draw")
elif user==1 and ai==0:
    print("Scissor Hitted by Rock,You Lose")
elif user==2 and ai==1:
    print("Scissor Cut Paper,You Lose")
elif user==0 and ai==2:
    print("Rock Caught by Paper,You Lose")

elif user==1 and ai==2:
    print("Scissor Cut Paper,You Win")
elif user==2 and ai==0:
    print("Rock Caught by Paper,You Win")
elif user==0 and ai==1:
    print("Scissor Hitted by Rock,You Win")

