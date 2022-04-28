dp = [""]*256
n = int(input())
for i in range(n):
    nombre = input()
    for j in nombre:
        if(len(dp[ord(j)]) < len(nombre)): dp[ord(j)] = nombre

for i in range(256):
    if (dp[i] != ""): print("Letra: " + chr(i) + ", nombre: " + dp[i])