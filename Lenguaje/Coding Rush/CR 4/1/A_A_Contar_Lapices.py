n,k = map(int,input().split())
cont = 0
for i in range(n):
    lapiz = int(input())
    if(lapiz == k): cont = cont+1
    
print(cont)