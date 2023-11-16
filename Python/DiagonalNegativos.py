N = int(input("Qual a ordem da matriz? "))
matriz: list[list[float]] = [[0 for x in range(N)] for x in range(N)]

for i in range(N):
    for j in range(N):
        matriz[i][j] = float(input(f"Elemento [{i},{j}]: "))
print("DIAGONAL PRINCIPAL:")
for i in range(0, N):
    print(f"{matriz[i][i]:.1f} ", end="")  
print()

cont = 0
for i in range(0, N):
    for j in range(0, N):
        if matriz[i][j] < 0:
            cont += 1
print(f"QUANTIDADE DE NEGATIVOS = {cont}")
