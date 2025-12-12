import matplotlib.pyplot as plt

sports = ['Cricket','Football','Basketball','Badminton']
values = [50,30,10,15]

plt.pie(values,labels=sports,autopct='%1.0f%%',startangle=90)
plt.title("Most Viewed Sports In India (Pie Test)")
plt.show()