n = 142857

for i in range(1, 8):
    print(f"{n} * {i} = {n * i}")

print(f"{n // 1000} + {n % 1000} = {n // 1000 + n % 1000}")

n *= n

print(f"n² = {n}")
print(f"{n // 1000000} + {n % 1000000} = {n // 1000000 + n % 1000000}")
