Hi=set(["hi","Set","intersected"])
Hello=set(["hello","Set2","intersected"])
print("Created Two Sets:",Hi,Hello)
Hi.add("Added")
print("Added Set To Hi:",Hi)
Hello.add("Adden")
print("Added Set To Hello:",Hello)
Hello.remove("Adden")
print("Removed Set To Hello:",Hello)
u=Hi.union(Hello)                             #union can be used like this also:-u=Hi|Hello
print("Union:",u)
i=Hi.intersection(Hello)                      #intersection can be used like this also:-i=Hi&Hello
print("Intersection:",i)
d=Hi.difference(Hello)                        #difference can be used like this also:-d=Hi-Hello
print("Difference:",d)
s=Hi.symmetric_difference(Hello)              #symmetric_difference can be used like this also:-s=Hi^Hello 
print("Symmetric differentce:",s)
c=Hi.issubset(Hello)                          
print("Checking Subset Of Two Set:-",c)         

