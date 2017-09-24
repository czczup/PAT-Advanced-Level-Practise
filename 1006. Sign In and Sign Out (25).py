N = int(input(""))
#最小时间一定小于86399
#最大时间一定大于0
first_time,last_time = 86399,0
first_stu,last_stu = "",""
for i in range(N):
    stu = input("").split(" ")
    #读取进入时间并转化为分钟
    time_in = [int(num) for num in stu[1].split(":")]
    minute_in = time_in[0]*3600 + time_in[1]+60 + time_in[2]
    #读取离开时间并转化为分钟
    time_out = [int(num) for num in stu[2].split(":")]
    minute_out = time_out[0]*3600+time_out[1]+60+time_out[2]
    #判断最早学生
    if minute_in<first_time:
        first_time = minute_in
        first_stu = stu[0]
    #判断最晚学生
    if minute_out>last_time:
        last_time = minute_out
        last_stu = stu[0]
print(first_stu,last_stu)

