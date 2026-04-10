def student_info():
    eno=input("Enter Enrolement.No:")
    add=input("Enter Address:")
    sname=input("Enter Student Name:")
    contact=int(input("Enter Contact No:"))
    print("\n")
    if eno=="":
        print("Enrolement No:000000000000")
        print("Address:",add)
        print("Student Name:",sname)
        print("Contact No:",contact)
    else:
        print("Enrolement No:",eno)
        print("Address:",add)
        print("Student Name:",sname)
        print("Contact No:",contact)
student_info()