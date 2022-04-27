from sys import stdin
for line in stdin:
    k = int(line)
    if(k<=3): print(0)
    elif(k<=8): print(7)
    else:   print(10)