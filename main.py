pi = 0
for i in range(10000000):
    pi += 4*((-1)**i)/(2*i+1)
    print(f"{i}회 반복: {pi}")