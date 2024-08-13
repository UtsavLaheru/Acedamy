import numpy as np

array = np.arange(0,6)
array2 = np.arange(6,12)
print("Before hstack:")
print(array)
print(array2)
result = np.hstack((array,array2))
result2 = np.vstack((array,array2))
print("\nAfter hstack:")
print(result)
print(result2)