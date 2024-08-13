import pandas as pd

dict={"col1":[1,2,3,4],"col2":[5,6,7,8]}
df=pd.DataFrame(dict)
print("DataFrame:")
print(df)
df.to_csv("hello.csv")