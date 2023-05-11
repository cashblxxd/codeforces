m = dict()
for i in range(int(input())):
    s = input()
    if s not in m:
        m[s] = 0
        print("OK")
    else:
        m[s] += 1
        print(s + str(m[s]))