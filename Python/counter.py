sum = 0
i = 1
for i in range(100):
    if i % 2 == 0:
        sum -= i
    else:
        sum += i
print(sum)