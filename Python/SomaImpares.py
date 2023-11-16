print("Digite dois números inteiros:")
a: int = int(input())
b: int = int(input())

if a > b:
    a, b = b, a

soma: int = 0

for i in range(a + 1, b):
    if i % 2 != 0:
        soma += i

print(f"SOMA DOS ÍMPARES = {soma}")
