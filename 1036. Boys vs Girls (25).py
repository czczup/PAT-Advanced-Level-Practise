N = int(input(""))
min_man,max_female = 100,0
#男生女生各一个字典
man,female = {},{}
for i in range(N):
    stu = input("").split(" ")
    score = int(stu[3])
    #根据输出格式设置好字典的key和value
    if stu[1] == 'M':
        man[stu[0]+" "+stu[2]] = score
    if stu[1] == 'F':
        female[stu[0]+" "+stu[2]] = score
if len(man) == 0:#只有女生
    print(max(female, key=female.get))
    print("Absent")
    print("NA")
elif len(female) == 0:#只有男生
    print("Absent")
    print(min(man, key=man.get))
    print("NA")
else:#男生女生都有
    print(max(female, key=female.get))
    print(min(man, key=man.get))
    #输出最大最小值所对应的key
    print(female[max(female, key=female.get)] -
          man[min(man, key=man.get)])
