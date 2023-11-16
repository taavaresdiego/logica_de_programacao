primeiroValor: int; segundoValor: int; terceiroValor: int

primeiroValor = int(input("Primeiro valor: "))
segundoValor = int(input("Segundo valor: "))
terceiroValor = int(input("Terceiro valor: "))

if primeiroValor < segundoValor and primeiroValor < terceiroValor:
    print(f"MENOR = {primeiroValor}")
elif segundoValor < primeiroValor and segundoValor < terceiroValor:
    print(f"MENOR = {segundoValor}")
else: 
    print(f"MENOR = {terceiroValor}")