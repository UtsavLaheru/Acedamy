import random
def password():
    secure=input("Enter 1 For Suggesting Strong Password Or Enter 2 For Customizing Yours Own Password:")
    secure=secure.lower()
    a1=["a","b","c","d","e","f","g","h","i","j","k","l","o","m","n","p","q","r","s","t","u","v","w","x","y","z","1","2","3","4","5","6","7","8","9","0"]
    if secure=="1":
        for i in range(0,9):
            store=random.choice(a1)
            print(store,end="")
        retry=input("\nDo You Want To Retry Enter y or Exit:")
        retry=retry.lower()
        print("\n")
        if retry=="y":
            return password()
        elif retry=="exit":
            print("Sorry But Only This Much We Can Offer!!")
            print("End Of Program")
        else:
            print("Your input Isn't A Vaild Character")
            print("Please Enter Only In Given Terms")
    elif secure=="2":
        print("Enter Password greater than or equal to 4 characters")
        make=input("Enter Password:")
        if len(make)>=4:
            print("If You Want to Add Number and Alphabates Then Enter 1,If You Want To Add Special Characters To Given Password Then Enter 2")
            adding=input("Do You Want To Add Number and Alphabates or Add Special Characters To The Password:")
            adding=adding.lower()
            if adding=="1":         
                for i in range(0,4):
                    store=random.choice(a1)
                    make+=store
                print(make,store,sep="")
                retry=input("\nDo You Want To Retry Enter y or Exit:")
                retry=retry.lower()
                print("\n")
                if retry=="y":
                    return password()
                elif retry=="exit":
                    print("Sorry But Only This Much We Can Offer!!")
                    print("End Of Program")
                else:
                    print("Your input Isn't A Vaild Character")
                    print("Please Enter Only In Given Terms")
            elif adding=="2":
                if len(make)>=8:           
                    add=["#","@","!","$","%","^","&","*"]
                    for i in range(0,4):
                        store=random.choice(add)
                        print(make,store,"\n",sep="",end="",)
                    retry=input("\nDo You Want To Retry Enter y or Exit:")
                    retry=retry.lower()
                    print("\n")
                    if retry=="y":
                        return password()
                    elif retry=="exit":
                            print("Sorry But Only This Much We Can Offer!!")
                            print("End Of Program")
                    else:
                        print("Your input Isn't A Vaild Character")
                        print("Please Enter Only In Given Terms")
                        retry=input("\nDo You Want To Retry Enter y or Exit:")
                        retry=retry.lower()
                        print("\n")
                        if retry=="y":
                            return password()
                        elif retry=="exit":
                            print("Sorry But Only This Much We Can Offer!!")
                            print("End Of Program")
                else:
                    retry=input("\nDo You Want To Retry Enter y or Exit:")
                    retry=retry.lower()
                    print("\n")
                    print("Enter More Than or Equal to 8 characters!!")
                    if retry=="y":
                        return password()
                    elif retry=="exit":
                        print("Sorry But Only This Much We Can Offer!!")
                        print("End Of Program")
            else:
                print("Your input Isn't A Vaild Number")
                print("Please Enter Only In Given Terms")
                retry=input("\nDo You Want To Retry Enter y or Exit:")
                retry=retry.lower()
                print("\n")
                if retry=="y":
                    return password()
                elif retry=="exit":
                    print("Sorry But Only This Much We Can Offer!!")
                    print("End Of Program")
        else:
            print("!!Error Password Should be greater than or equal to 4 characters!!")
            retry=input("\nDo You Want To Retry Enter y or Exit:")
            retry=retry.lower()
            print("\n")
            if retry=="y":
                return password()
            elif retry=="exit":
                print("Sorry But Only This Much We Can Offer!!")
                print("End Of Program")
    else:
        print("Your input Isn't A Vaild Character")
        print("Please Enter Only In Given Terms")
        retry=input("\nDo You Want To Retry Enter y or Exit:")
        retry=retry.lower()
        print("\n")
        if retry=="y":
            return password()
        elif retry=="exit":
            print("Sorry But Only This Much We Can Offer!!")
            print("End Of Program")
password()

