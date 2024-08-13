import pandas as pd

dict={"col1":[1,2,3,4],"col2":[5,6,7,8]}
df=pd.DataFrame(dict)
print("DataFrame:",df)
print("\nCol1 Series:",df['col1'])