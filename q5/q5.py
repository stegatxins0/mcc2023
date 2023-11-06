import math

n, k = map(int, input().split())
rec = []

for i in range(n):
    h, w = map(int, input().split())
    rec.append((h, w))

dp = [[math.inf] * (n + 1) for _ in range(k + 1)]
dp[0][0] = 0

for i in range(1, k + 1):
    for j in range(1, n + 1):
        for l in range(j):
            max_h = max(rec[l:j], key=lambda x: x[0])[0]
            max_w = sum(x[1] for x in rec[l:j])
            dp[i][j] = min(dp[i][j], dp[i - 1][l] + max_h * max_w)

print(dp[k][n])
