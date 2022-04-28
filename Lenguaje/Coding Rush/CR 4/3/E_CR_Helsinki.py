import math
n = int(input())
conejos = list(input().split())
for i in range(len(conejos)): conejos[i] = int(conejos[i])
conejos.sort()
act = conejos[0]
cont = 0
sol = 0
for i in conejos:
    if(i == act): cont = cont+1
    else:
        sol += (act + 1) * math.ceil(cont / (act + 1))
        act = i
        cont = 1

sol += (act + 1) * math.ceil(cont / (act + 1))
print(sol)