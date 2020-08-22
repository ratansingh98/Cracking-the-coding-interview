def nullify_row(matrix, row):
    for i in range(len(matrix[0])):
        matrix[row][i] = 0


def nullify_col(matrix, col):
    for i in range(len(matrix)):
        matrix[i][col] = 0


if __name__=="__main__":

    m = int(input())
    n = int(input())
    matrix = []
    for i in range(m):
        temp=[]
        temp1=[]
        for j in range(n):
            temp.append(int(input()))
            temp1.append(0)
        matrix.append(temp)


    rows = []
    cols = []

    for x in range(m):
        for y in range(n):
            if matrix[x][y] == 0:
                rows.append(x)
                cols.append(y)

    for row in rows:
        nullify_row(matrix, row)

    for col in cols:
        nullify_col(matrix, col)

    print(matrix)




