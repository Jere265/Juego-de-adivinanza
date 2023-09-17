import random

numerodeintentos = 0

objetivo = []
list1 = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]
#list2 = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]

i = 0

while (i < 4):
        objetivo.append(random.choice(list1))
        list1.remove(objetivo[i])
        i += 1


#print("objetivo a encontrar", objetivo)

guess = input("Ingresar intento: ")

intento = (list(guess))

numeroscorrectos = 0
posicionescorrectas = 0

x = 0
y = 0

while (x < 4):
    while (y < 4):
        if (intento[x] == objetivo[y]):
            numeroscorrectos += 1
            break
        y += 1
    y = 0
    x += 1

z = 0

for z in range (4):
    if(objetivo[z] == intento[z]):
        posicionescorrectas += 1

print("posiciones correctas", posicionescorrectas)
print("numeros correctos: ", numeroscorrectos, "\n")
numerodeintentos += 1

while (objetivo !=  intento):
    #print("objetivo a encontrar", objetivo)

    guess = input("Ingresar intento: ")

    intento = (list(guess))

    numeroscorrectos = 0
    posicionescorrectas = 0

    x = 0
    y = 0

    while (x < 4):
        while (y < 4):
            if (intento[x] == objetivo[y]):
                numeroscorrectos += 1
                break
            y += 1
        y = 0
        x += 1

    z = 0

    for z in range (4):
        if(objetivo[z] == intento[z]):
            posicionescorrectas += 1

    print("posiciones correctas", posicionescorrectas)
    print("numeros correctos: ", numeroscorrectos, "\n")
    numerodeintentos += 1

print("Ganaste en ", numerodeintentos, " intentos")