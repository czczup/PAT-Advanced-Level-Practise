M,N,K = [int(i) for i in input("").split(" ")]
for i in range(K):
    stack = []
    num = [int(item) for item in input("").split(" ")]
    current,flag = 0,False
    #将1-6入栈
    for j in range(1,N+1):
        stack.append(j)
        if len(stack)>M:
            break
        while stack != [] and stack[-1] == num[current]:
            stack.pop()
            current += 1
    #print(current)
    if current == N:
        flag = True
    if flag == True:
        print("YES")
    else:
        print("NO")
