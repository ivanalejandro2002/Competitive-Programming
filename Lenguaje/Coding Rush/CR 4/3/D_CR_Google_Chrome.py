pila = []
from sys import stdin
for line in stdin:
    n = list(line.split())
    if(n[0]=='A'): pila.insert(len(pila),n[1])
    if(n[0]=='R'):
        if(len(pila)>=2):
            pila.pop(len(pila) - 1)
            print(pila[len(pila) - 1])
        else: print("Sin historial")