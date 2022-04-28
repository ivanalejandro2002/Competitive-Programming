ini,fin = map(int,input().split())
while(ini<=fin):
    if(ini%15==0):print("BuzzFizz")
    elif(ini%5==0):print("Fizz")
    elif(ini%3==0):print("Buzz")
    else: print(ini)
    ini += 1