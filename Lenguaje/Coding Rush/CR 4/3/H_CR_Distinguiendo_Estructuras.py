pila = []
es_pila = 1
from sys import stdin
for line in stdin:
    op, num = map(int, line.split())
    if(op == 1 ):
        pila.append(num)
    else:
        if(pila.pop() != num): es_pila = 0
    

if(es_pila): print("Pila")
else: print("Cola")