import numpy as np
mat=[[1,2,3],[4,5,6],[7,8,9]]
mat=np.array(mat)
for i in range(len(mat[0])):
    mat[i]=mat[:,i]
print(mat)


        