import pandas as pd

dict={"col1":[1,2,3,4],"col2":[5,6,7,8]}
df=pd.DataFrame(dict)
print("DataFrame:")
print(df)
print(df.drop("col2",axis=1))