mat=[[1,2,3],[4,5,6],[7,8,9]]
for i in range(len(mat)):
    for j in range(i,len(mat[i])):
        if i!=j:
            temp=mat[i][j]
            mat[i][j]=mat[j][i]
            mat[j][i]=temp
print(mat)