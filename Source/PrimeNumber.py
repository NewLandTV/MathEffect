import math

n = int(input())
x = [True for i in range(n + 1)]

for i in range(2, int(math.sqrt(n)) + 1):
    if x[i] == True:
        j = 2

        while i * j <= n:
            x[i * j] = False
            j += 1

for i in range(2, n + 1):
    if x[i]:
        print(i, end=" ")
