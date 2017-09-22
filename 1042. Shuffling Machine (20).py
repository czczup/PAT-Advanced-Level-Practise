number_of_repeat = int(input(""))
shuffling_list = [int(i) for i in input("").split(" ")]
origin_list = [("S"+str(i)) for i in range(1,14)] + \
              [("H"+str(i)) for i in range(1,14)] + \
              [("C"+str(i)) for i in range(1,14)] + \
              [("D"+str(i)) for i in range(1,14)] + \
              [("J"+str(i)) for i in range(1,3)]
result_list = [0]*54
for i in range(number_of_repeat):
    for j in range(54):
        result_list[shuffling_list[j]-1] = origin_list[j]
    origin_list = result_list
    result_list = [0]*54

#格式化输出
print(origin_list[0],end='')
for i in range(1,len(origin_list)):
    print(" " + origin_list[i],end='')
