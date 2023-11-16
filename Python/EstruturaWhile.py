x: int
soma: int

soma = 0

x = int(input("Digite um número: "))
while x != 0:
    soma = soma + x
    x = int(input("Digite outro número: "))

print("A soma dos números digitados é: ", soma)    