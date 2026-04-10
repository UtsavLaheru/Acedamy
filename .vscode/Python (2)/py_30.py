# file=open("utsav.txt","x")             #create file and write in file
# file.write("Hello Pythone")
# file.close()
file=open("utsav.txt","r")             #read entire file
print(file.read())
file.close()
file=open("utsav.txt","r")             #read file line by line 
print(file.readline())
file.close()
file=open("utsav.txt","w")            #write string in file            
file.write("Hello")
file.write("World\n")
file.close()
file=open("utsav.txt","a")
file.writelines(["Hello Polytechnic"])     #write list in file
file.close()
file=open("utsav.txt","r")           #count lines in the file
lines=len(file.readlines())
print(lines)
file.close()
file=open("utsav.txt","r")           #count words in the file
line=file.read()
words=line.split()
print(len(line))
file.close()
