hora: int;
hora = int(input("Digite a hora atual: "))

if hora < 12:
    print("Bom dia!")
elif hora < 18:
    print("Boa tarde!")
else:
    print("Boa noite!")