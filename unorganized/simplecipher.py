a="abcdefghijklmnopqrstuvwxyz"
i=input()
r=""
for c in i:
    p=a.find(c.lower())
    if p != -1:
        r += a[(p+8)%26]
print(r)
