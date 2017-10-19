str1 = input().upper()
str2 = input().upper()
#转换为大写
charlist = list(str1)
#转换为list
char = []
#用来记录是否重复出现
for i in charlist:
    if i not in str2:
        if i not in char:
            char.append(i)
            print(i,end='')
