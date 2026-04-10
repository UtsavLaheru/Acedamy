filename1 = input("Enter file name 1: ")
filename2 = input("Enter file name 2: ")
# open file in read mode
f1 = open(filename1, "r")
f2 = open(filename2, "r")
# read the file
data1 = f1.read()
data2 = f2.read()
# remove spaces from the string
data1 = data1.replace(" ","")
data2 = data2.replace(" ","")
# get the length of the string
length1 = len(data1)
length2 = len(data2)
max_length = max(length1, length2)
# print interleaved
for i in range(max_length):
    if i < length1:
        print(data1[i], end="")
    if i < length2:
        print(data2[i], end="")