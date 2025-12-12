import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

data_range = pd.date_range('21-07-2025','25-07-2025',freq='D')
print(data_range)
values = np.random.randn(len(data_range)).cumsum()
print(values)
data = {'data_column': data_range,'value_column': values}
df = pd.DataFrame(data)

plt.plot(df['data_column'], df['value_column'], linestyle = 'dotted')

plt.title('Time Series Plot')
plt.xlabel('Date - Time')
plt.ylabel('Value')
plt.xticks(rotation = 45)

plt.show()