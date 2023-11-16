a: int
b: int

a = int(input("Primeiro valor: "))
b = int(input("Segundo valor: "))

while a != b:
    if a > b:
        print("DECRESCENTE")
    else:
        print("CRESCENTE")
    a = int(input("Primeiro valor: "))
    b = int(input("Segundo valor: "))

