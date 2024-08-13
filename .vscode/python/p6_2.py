import pandas as pd

listy=["a","b","d","c","f","e","g"]
s=pd.Series(listy)
print("Before Sorting:")
print(s)
s = s.sort_values()
print("After Sorting:")
print(s)