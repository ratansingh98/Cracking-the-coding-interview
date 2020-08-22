n = int (input())
img = [[x+y for x in range(n)] for y in range(n)]
print("orignal image\n",img)
res = []
for i in range(n):
    temp=[]
    for j in range(n):
        temp.append(img[n-j-1][n-i-1])
    res.append(temp)

print("Rotated image\n",res)