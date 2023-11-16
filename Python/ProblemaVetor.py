print("Quantos números você vai digitar?")
N: int = int(input())

vet: list = [0 for x in range(N)]

for i in range(N):
    vet[i] = float(input("Digite um número: "))

print()
print("NÚMEROS = ", end="")
for i in range(N):
    print(f"{vet[i]:.1f} ", end="")

print()

soma: float = 0.0
for i in range(N):
    soma += vet[i]

print(f"SOMA = {soma:.2f}")
