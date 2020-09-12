
from collections import Counter
for _ in " "*int(input()):
  n = int(input())
  a = sorted(list(map(int, input().split())))
  lst = Counter(a)
  s = 0
  sub = []
  a1 = sorted(set(a))
  f = 0
  f1 = 0
  for i in range(len(a1)):
    if a1[i] != i:
      s += i
      f = 1
      break
    if lst[a1[i]] > 1 and f1 == 0:
        sub.append(a1[i])
    else:
      f1 = 1
  if f == 0:
    s = a1[-1]+1
  if len(sub) != 0:
    print(s+sub[-1]+1)
  else:
    print(s)
