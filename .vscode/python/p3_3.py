import numpy as np
list = [[0.9,12,45.8,33,98.5,58,3],[0.9,2,4.8,3,98.5,58,3]]
array = np.array(list)
print("Array:",array)
print("Mean of row1:",np.mean(array[0]))
print("Meanof row2:",np.mean(array[1]))