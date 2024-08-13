import numpy as np

array = np.arange(0,14)
print("Before Split:\n",array)
array = np.array_split(array,[2,4+2,8+4+2])

print("\nAfter Split:\n",array)
