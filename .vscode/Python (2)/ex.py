check = str(input("Enter The Element You Want To Check:-"))
List1 = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]
for i in range(0,len(List1)):
    if (List1[i] == check):
        print("Element is a member of List")
        break
else:
    print("Element is been Not Found")
