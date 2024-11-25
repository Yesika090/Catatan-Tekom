def draw_board(board):
  print('-------------')
  for i in range(3):
    print('|', board[i][0], '|', board[i][1], '|', board[i][2], '|')
    print('-------------')

def check_win(board, player):
  # Cek baris, kolom, dan diagonal
  for i in range(3):
    if all(board[i][j] == player for j in range(3)) or \
       all(board[j][i] == player for j in range(3)):
      return True
  if all(board[i][i] == player for i in range(3)) or \
       all(board[i][2-i] == player for i in range(3)):
    return True
  return False

def is_full(board):
  for i in range(3):
    for j in range(3):
      if board[i][j] == ' ':
        return False
  return True

board = [[' ' for _ in range(3)] for _ in range(3)]
player = 'X'

while True:
  draw_board(board)
  row, col = map(int, input("Masukkan baris (1-3) dan kolom (1-3): ").split())
  row -= 1
  col -= 1

  if board[row][col] != ' ':
    print("Kotak sudah terisi!")
    continue

  board[row][col] = player

  if check_win(board, player):
    print(f"Pemain {player} menang!")
    break

  if is_full(board):
    print("Permainan seri!")
    break

  player = 'O' if player == 'X' else 'X'