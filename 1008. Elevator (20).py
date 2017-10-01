N,*requests = [int(i) for i in input("").split(" ")]
now_floor,time = 0,0
for i in range(len(requests)):
    #上楼6秒
    if requests[i] > now_floor:
        time += 6*(requests[i]-now_floor)
    #下楼4秒
    else:
        time += 4*(now_floor-requests[i])
    #停留5秒
    time += 5
    now_floor = requests[i]
print(time)