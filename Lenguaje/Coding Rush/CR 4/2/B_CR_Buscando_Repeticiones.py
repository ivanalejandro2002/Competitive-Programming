uno = input()
orig = uno;
uno = uno.lower()
dos = input().lower()
k = 0
cont = 0
for i in range(len(dos)):
    if(dos[i] == uno[0]):
        j = i
        k = 0
        while(j< len(dos) and k< len(uno) and dos[j] == uno[k]):
            k = k+1
            j = j+1
        
        if(k==len(uno) and ((j < len(dos) and (dos[j]<'a' or dos[j]>'z')) or (j>=len(dos)))): cont = cont+1
    

sol = orig + " se repite " + str(cont) + " ve"
if(cont == 1): sol+= "z."
else: sol+="ces."
print(sol)