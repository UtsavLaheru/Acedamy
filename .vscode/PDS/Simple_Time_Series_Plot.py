import matplotlib.pyplot as plt
import pandas as pd

months = ['January','Febuary','March','April','May']
values = [10,20,35,25,55]

plt.plot(months,values,linestyle = 'dotted')
plt.title("Time Series Plot")
plt.xlabel("Months")
plt.ylabel("Sales")

plt.show()