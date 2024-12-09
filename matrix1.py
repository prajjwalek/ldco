# addition of two matrices

X =[[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]
Y =[[5,8,1],
    [6,7,3],
    [4,5,9]]
result = [[0,0,0],
    [0,0,0],
    [0,0,0]]
 # iterate through rows
for i in range(len(X)):
 # iterate through columns
    for j in range(len(X[0])):
        result[i][j] = X[i][j] + Y[i][j]
for i in result:
    print(i)
print("\n")

#Programtomultiplytwomatricesusingnestedloops
 #3x3matrix
X=[[12,7,3],
    [4,5,6],
    [7,8,9]]
 #3x4matrix
Y=[[5,8,1,2],
    [6,7,3,0],
    [4,5,9,1]]
 #resultis3x4
result=[[0,0,0,0],
    [0,0,0,0],
    [0,0,0,0]]
 #iteratethroughrowsofX
for i in range(len(X)):
 #iteratethroughcolumnsofY
    for j in range(len(Y[0])):
 #iteratethroughrowsofY
        for k in range(len(Y)):
            result[i][j]+=X[i][k]*Y[k][j]
for r in result:
    print(r)
print("\n")


#Programtotransposeamatrixusinganestedloop
X=[[12,7],
    [4,5],
    [3,8]]
result=[[0,0,0],
    [0,0,0]]
 #iteratethroughrows
for i in range(len(X)):
 #iteratethroughcolumns
    for j in range(len(X[0])):
        result[j][i]=X[i][j]
for r in result:
    print(r)
print("\n")

X =[[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]
Y =[[5,8,1],
    [6,7,3],
    [4,5,9]]
result = [[0,0,0],
    [0,0,0],
    [0,0,0]]
 # iterate through rows
for i in range(len(X)):
 # iterate through columns
    for j in range(len(X[0])):
        result[i][j] = X[i][j] - Y[i][j]
for i in result:
    print(i)
print("\n")