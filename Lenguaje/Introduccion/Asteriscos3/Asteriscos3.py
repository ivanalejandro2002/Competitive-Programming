n = int(input())
for i in range(n):
    linea = ""
    for j in range(n - i - 1):
        linea+=" ";
        
    for j in range (2*i+1):
        linea+="*"
    print(linea)