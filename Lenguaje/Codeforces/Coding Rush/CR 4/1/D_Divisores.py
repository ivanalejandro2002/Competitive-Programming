from sys import stdin
for line in stdin:
    k = int(line)
    sol = ""
    if(k%2==0): sol+= "2 "
    if(k%3==0): sol+= "3 "
    if(k%5==0): sol+= "5 "
    if(k%7==0): sol+= "7 "
    print(sol)