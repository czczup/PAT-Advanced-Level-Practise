mul = 1.0
res = []
for i in range(3):
    W,T,L = [eval(item) for item in input("").split(" ")]
    max_num = max(W,T,L)
    mul *= max_num;
    #判断赔率最大场次
    if max_num == W:
        res.append('W')
    elif max_num == T:
        res.append('T')
    else:
        res.append('L')
#格式化输出
print(" ".join(res),end=' ')
#案例里的37.98错了，是37.97
#不需要四舍五入
print("%.2lf"%((mul*0.65-1)*2))

