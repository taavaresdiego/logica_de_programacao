N = int(input("Quantos números você quer digitar? "))

vet: [float] = [0 for x in range(N)]

for i in range(0, N):
  vet[i] = float(input(f"digite um número: "))

print()
print("Números digitados: ")
for i in range(0, N):
  print(f"{vet[i]:.1f}")