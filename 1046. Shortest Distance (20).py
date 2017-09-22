N,*dis = [int(i) for i in input("").split(" ")]
sum,sum_dis = 0,[0]*N
for i in range(N):
    sum += dis[i]
    sum_dis[i] = sum
M = int(input(""))
for i in range(M):
    a,b = [int(i) for i in input("").split(" ")]
    temp = abs(sum_dis[b-2] - sum_dis[a-2])
    print(min(temp,sum-temp))