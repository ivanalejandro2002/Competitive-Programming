n = [0]
cola = []
while(n[0]!="X"):
    n = list(input().split())
    if(n[0]=='D'): 
        cola.insert(len(cola), n[1])
        print("ok")
    if(n[0]=='C'): print("faltan " + str(len(cola)) + " descarga(s)")
    if(n[0]=='T'): 
        print("descargada " +str(cola[0]))
        cola.pop(0)
    
print(str(len(cola)) + " descarga(s) abortadas")