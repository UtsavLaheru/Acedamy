import pandas as pd
import matplotlib.pyplot as mpl
file_data = pd.read_csv('.vscode/python/7.csv')
print("Availabe Date:")
print(list(file_data['Date']))
opend=input('Opening Date')
closed=input('Closing Date')
print(file_data)
open=file_data[opend:closed]
# close=file_data[opend:closed]['Closing Price']
mpl.plot(open["Opening Price"],open)
mpl.show()


