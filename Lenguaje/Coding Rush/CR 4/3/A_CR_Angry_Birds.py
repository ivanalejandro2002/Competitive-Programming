from sys import stdin
sol = 0
for line in stdin:
    sol += line.count('o')

print(sol)