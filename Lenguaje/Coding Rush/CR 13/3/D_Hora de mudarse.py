dias = {}
for i in range(5):
    d = input()
    horas = int(input())
    dias.update({d : horas})
    
d = input()
if(dias.get(d) < 6): print("mejor no vayas")
else: print("no seas floja, levantate")