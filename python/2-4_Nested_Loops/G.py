n = int(input())

for i in range(1, n + 1):
    for j in range(3 + i - 1, 0, -1):
        print(f"До старта {j} секунд(ы)")
    print(f"Старт {i}!!!")
