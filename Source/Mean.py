n = int(input())
sum = 0

for i in range(n):
    x = float(input())
    sum += x

mean = sum / n

print("Mean :", mean)