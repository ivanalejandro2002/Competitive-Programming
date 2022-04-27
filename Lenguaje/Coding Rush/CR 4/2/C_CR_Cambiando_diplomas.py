n = int(input())
cambios = {}
nombre = []
for i in range(n):
    original,modif = map(str,input().split())
    cambios.update({original : modif})
    nombre.insert(0,original)

cad = input()
for i in nombre:
    cad = cad.replace(i, cambios[i])
    
print(cad)