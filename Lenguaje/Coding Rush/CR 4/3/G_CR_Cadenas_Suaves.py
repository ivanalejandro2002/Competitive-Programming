from sys import stdin
for k in stdin:
    line = k.strip()
    cubeta = [0]*256
    for i in line:
        cubeta[ord(i)]+=1
      
    x  = max(cubeta)
    print(len(line) - x)