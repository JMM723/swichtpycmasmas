
# Mostramos el titulo de la calculadora
print("CALCULADORAGOOOOD")

# Aqui mostramos las operaciones disponibles en mi supercalculadora
print("\n1. Sumar")
print("2. Restar")
print("3. Multiplicar")
print("4. Dividir")

opcion = int(input("\nElige una operacion: ")) # Guardamos la opcion elegida

# Pedimos los dos numeros que se van a utilizar en la operacion
num1 = float(input("Ingresa el primer numero: "))
num2 = float(input("Ingresa el segundo numero: "))

# Revisamos que operacion eligio el usernameee
match opcion:

    case 1:
        print("Resultado:", num1 + num2) # Realiza la suma

    case 2:
        print("Resultado:", num1 - num2) # Realiza la resta

    case 3:
        print("Resultado:", num1 * num2) # Realiza la multiplicacion

    case 4:
        # Comprobamos que el segundo numero no sea cero para no valer chetos y tender al infinito como gojo
        if num2 != 0:
            print("Resultado:", num1 / num2)
        else:
            print("No se puede dividir entre cero.")

    case _:
        print("Opcion no valida.") # Se muestra si elige otra opcion invalida,xd
