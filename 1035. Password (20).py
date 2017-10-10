N = int(input())
accounts = []
flag = 0
for i in range(N):
    account = input().split(" ")
    #字符替换
    result = account[1].replace('1','@').replace('0','%').replace('l','L').replace('O','o')
    #判断是否发生替换
    if account[1]!=result:
        flag = 1
        account[1] = result
        accounts.append(account)
#若没有错误密码
if flag == 0:
    if N==1:
        print("There is "+str(N)+" account and no account is modified")
    else:
        print("There are "+str(N)+" accounts and no account is modified")
#有错误密码
else:
    print(len(accounts))
    for i in accounts:
        print(i[0],i[1])
