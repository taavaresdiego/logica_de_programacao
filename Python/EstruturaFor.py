x: int
soma: int

N = int(input("Quantos números você quer digitar? "))

soma = 0

for i in range(1, N + 1):
    x = int(input(f"Digite o {i}º número: "))
    soma = soma + x

print(f"Soma: {soma}")


