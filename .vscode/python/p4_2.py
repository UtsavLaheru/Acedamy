import numpy as np
list = [[1,1,1,2],[2,2,2,1]]
array = np.array(list)
print("Array:",array)
print("Mean:",np.mean(array,axis=1))
print("Median:",np.median(array,axis=1))
print("STD:",np.std(array,axis=1))