n = int(input())
suma = 0
for i in range(n):
    cant,precio = map(int,input().split())
    suma += precio * cant

print(suma)