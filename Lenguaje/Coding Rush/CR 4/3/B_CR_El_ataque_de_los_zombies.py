from sys import stdin
i = 0
for line in stdin:
    if(i == 0):
        n = int(line)
        i = 1
    elif(i == 1):
        i = 2
        dps = list(line.split())
    else:
        vida = list(line.split())
        orden = []
        for i in range(n):
            orden.insert(len(orden),{'dps': int(dps[i]), 'vida': int(vida[i])})
            
        suma = 0
        k = 0
        for i in range(n):
            k+= orden[i]['vida']    
            suma+= k*orden[i]['dps']
        
        print(suma)
        i = 0