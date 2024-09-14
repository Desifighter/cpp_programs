import numpy as np

class Sudoku:
    def _init_(self, board):
        self.board = board
        self.original_board = board.copy()

    def is_valid(self, row, col, num):
        # Check if the number is already in the row
        if num in self.board[row]:
            return False
        # Check if the number is already in the column
        if num in self.board[:,col]:
            return False
        # Check if the number is already in the 3x3 sub-grid
        start_row = row - row%3
        start_col = col - col%3
        sub_grid = self.board[start_row:start_row+3, start_col:start_col+3]
        if num in sub_grid:
            return False
        return True

    def solve(self):
        for row in range(9):
            for col in range(9):
                if self.board[row][col] == 0:
                    for num in range(1,10):
                        if self.is_valid(row, col, num):
                            self.board[row][col] = num
                            if self.solve():
                                return True
                            self.board[row][col] = 0
                    return False
        return True

board = np.array([[5,3,0,0,7,0,0,0,0],
                  [6,0,0,1,9,5,0,0,0],
                  [0,9,8,0,0,0,0,6,0],
                  [8,0,0,0,6,0,0,0,3],
                  [4,0,0,8,0,3,0,0,1],
                  [7,0,0,0,2,0,0,0,6],
                  [0,6,0,0,0,0,2,8,0],
                  [0,0,0,4,1,9,0,0,5],
                  [0,0,0,0,8,0,0,7,9]])

sudoku = Sudoku(board)
print(sudoku.solve())
print(sudoku.board)