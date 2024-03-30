n = int(input())
a, b = map(int, input().split())
ans = []
for i in range(n):
    ans.append([int(ii) for ii in input().split()])
ans.sort(key=lambda x: (x[0] * x[1]))
t = 0
for i in range(n):
    t = max(t, a // ans[i][1])
    a *= ans[i][0]
print(t)
