N,M,C1,C2 = [int(i) for i in input("").split(" ")]
num_of_rescue = [int(i) for i in input("").split(" ")]
inf = float('inf')
minmap = [[inf]*N for i in range(N)]
res = [[0]*N for i in range(N)]
cnt = [[0]*N for i in range(N)]
for i in range(M):
    c1,c2,l = [int(i) for i in input("").split(" ")]
    minmap[c1][c2] = l
    res[c1][c2] = num_of_rescue[c2]
    cnt[c1][c2] = 1
map = [i for i in minmap]
for i in range(N):
    for j in range(i,N):
        for k in range(N):
            if minmap[i][j] >= minmap[i][k] + minmap[k][j]:
                minmap[i][j] = minmap[i][k] + minmap[k][j]
                if i<k and k<j:
                    if res[i][k]!=0 and res[k][j]!=0:
                        res[i][j] = res[i][k] + res[k][j]
                    #print("res["+str(i)+"]"+"res["+str(j)+"] = res["+str(i)+"]["+str(k)+"] + res["+str(k)+"]["+str(j)+"]")
                    #print(res)
for i in range(N):
    for j in range(i,N):
        for k in range(N):
            if i<k and k<j and minmap[i][j]!=inf:
                if minmap[i][j] == map[i][k] + map[k][j]:
                    cnt[i][j] += 1
                elif minmap[i][j] > map[i][k] + map[k][j]:
                    cnt[i][j] = 1

print(cnt[C1][C2],res[C1][C2]+num_of_rescue[C1])
print(cnt)
print(res)
