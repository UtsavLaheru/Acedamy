import pandas as pd

listy = [1,2,3,4,5,6]
df = pd.Series(listy)
print("Series:",df)
mean = df.mean()
std = df.std()
var = df.var()
print("Mean:",mean)
print("Standard devation:",std)
print("Variaction")