import pandas as pd
import numpy as np

array = np.arange(11,2,-1)
df = pd.Series(array)
print("Series:")
print(df)
df = df.sort_values()
print("\nSerires After Sort:")
print(df)
