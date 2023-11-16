salario1: float; salario2: float
nome1: str; nome2: str
idade1: int; idade2: int
sexo1: str; sexo2: str

nome1 = input("Digite o nome da primeira pessoa: ")
idade1 = int(input("Digite a idade da primeira pessoa: "))
salario1 = float(input("Digite o salário da primeira pessoa: "))
sexo1 = input("Digite o sexo da primeira pessoa: ")

nome2 = input("Digite o nome da segunda pessoa: ")
idade2 = int(input("Digite a idade da segunda pessoa: "))
salario2 = float(input("Digite o salário da segunda pessoa: "))
sexo2 = input("Digite o sexo da segunda pessoa: ")

print(f"nome: {nome1}")
print(f"idade: {idade1}")
print(f"salário: {salario1:.2f}")
print(f"sexo: {sexo1}")


print(f"nome: {nome2}")
print(f"idade: {idade2}")
print(f"salário: {salario2:.2f}")
print(f"sexo: {sexo2}")

