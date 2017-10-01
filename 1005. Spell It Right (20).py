N = input("")
numlist = [int(N[i]) for i in range(len(N))]
#求和并转化为字符串
res = str(sum(numlist))
reslist = [int(res[i]) for i in range(len(res))]
#散列表映射英语单词
toEnglist = {1:'one',2:'two',3:'three',
             4:'four',5:'five',6:'six',
             7:'seven',8:'eight',9:'nine',
             0:'zero'}
print(toEnglist[reslist[0]],end='')
for i in range(1,len(reslist)):
    print(" "+toEnglist[reslist[i]],end='')