#去掉数据头K
line1 = [eval(i) for i in input("").split(" ")][1:]
line2 = [eval(i) for i in input("").split(" ")][1:]
#两两一对分割并转化为字典
x1 = dict([line1[i:i+2] for i in range(0,len(line1),2)])
x2 = dict([line2[i:i+2] for i in range(0,len(line2),2)])
#把x2合并到x1中
for k, v in x2.items():
    if k in x1.keys():
        x1[k] += v
    else:
        x1[k] = v
#输出字典数量
print(len(x1),end=" ")
#键从大到小输出键值对
lst = list(x1.keys())
for i in range(len(x1)-1):
    Max = max(lst)
    print(Max,round(x1[Max],1),end=" ")
    lst.remove(Max)
print(lst[0],x1[lst[0]],end="")