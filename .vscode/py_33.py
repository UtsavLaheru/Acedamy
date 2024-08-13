import string
def main ():
# file for input
    file = input("Please enter the name of the original file: ")
    infile = open(file, 'r')
# file 2 for writing
    File2 = input("Please enter the name of the file to write to: ")
    outfile = open(File2, 'w')
# Change file
    for line in infile:
        words = line.split( )
        for word in words:
            counter = 0
        for letter in word:
            if not letter in string.punctuation:
                counter += 1
        if counter == 4:
            if "." in word:
                word = "****."
            elif "," in word:
                word = "****,"
            elif "?" in word:
                word = "****?"
            elif "!" in word:
                word = "****!"
            else:
                word = "****"
        print (word + " ", file = outfile,end='')
    infile.close()
    outfile.close()
main ()