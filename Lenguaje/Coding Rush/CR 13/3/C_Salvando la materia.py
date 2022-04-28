orig = list(input())
orig.reverse()
orig = "".join([str(item) for item in orig])
listo = 0
for i in range(3):
    n = input()
    if(n==orig): 
        print("Es la palabra " + str(i+2))
        listo = 1
    

if(listo == 0): print("No hay respuesta correcta")