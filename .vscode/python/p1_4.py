import numpy as np

array = np.arange(0,6)
array = array.reshape((3, 2))
print("3x2 Array")

print(array)
array = array.reshape((2, 3))
print("\n2x3 Array")
print(array)