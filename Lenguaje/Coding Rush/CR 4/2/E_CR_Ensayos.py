cad = input()
mayus = 1
for i in range(len(cad)):
    if(mayus):
        if(cad[i]<='z' and cad[i]>='a'):
            cad = cad[:i]+ cad[i].upper() + cad[i+1:]
            mayus = 0
        
    elif(cad[i]=='.' or cad[i]=='!' or cad[i]=='?'): mayus = 1
    else: cad = cad[:i]+ cad[i].lower() + cad[i+1:]

print(cad)