M: int
N: int

M = int(input("Quantas linhas vai ter cada matriz? "))
N = int(input("Quantas colunas vai ter cada matriz? "))

mat: [[int]] = [[0 for x in range(N)] for x in range(M)]

for i in range(0, M):
  for j in range(0, N):
    mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print()
print("MATRIZ DIGITADA:")
for i in range(0, M):
  for j in range(0, N):
    print(f"{mat[i][j]:3} ", end="")
  print()

  


