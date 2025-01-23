def setZeroes(self, matrix: List[List[int]]) -> None:
    sp = 2 << 31

    def set_z(i, j, m):
        for ii in range(len(matrix[0])):
            if matrix[i][ii] != sp:
                matrix[i][ii] = 0

        for jj in range(len(matrix)):
            if matrix[jj][j] != sp:
                matrix[jj][j] = 0

    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] == 0:
                matrix[i][j] = sp

    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] == sp:
                set_z(i, j, matrix)
    
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] == sp:
                matrix[i][j] = 0
