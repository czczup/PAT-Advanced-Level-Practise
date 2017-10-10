n,m = [int(i) for i in input().split(" ")]
A,C,M,E,result = {},{},{},{},{}
for i in range(n):
    info = [int(item) for item in input().split(" ")]
    A[info[0]] = (info[1]+info[2]+info[3])/3.0
    C[info[0]] = info[1]
    M[info[0]] = info[2]
    E[info[0]] = info[3]

Alist = sorted(A.items(),key=lambda item:item[1])
Clist = sorted(C.items(),key=lambda item:item[1])
Mlist = sorted(M.items(),key=lambda item:item[1])
Elist = sorted(E.items(),key=lambda item:item[1])

nowGrade = Alist[-1][1]
nowRank = 1
for i in range(n):
    if Alist[-1-i][1] != nowGrade:
        nowRank = 1+i
        nowGrade = Alist[-1-i][1]
    result[Alist[-1-i][0]] = str(nowRank) + " A"

nowGrade = Clist[-1][1]
nowRank = 1
for i in range(n):
    if Clist[-1-i][1] != nowGrade:
        nowRank = 1+i
        nowGrade = Clist[-1-i][1]
    if nowRank < int(result[Clist[-1-i][0]][0]):
        result[Clist[-1-i][0]] = str(nowRank)+" C"

nowGrade = Mlist[-1][1]
nowRank = 1
for i in range(n):
    if Mlist[-1-i][1] != nowGrade:
        nowRank = 1+i
        nowGrade = Mlist[-1-i][1]
    if nowRank < int(result[Mlist[-1-i][0]][0]):
        result[Mlist[-1-i][0]] = str(nowRank)+" M"

nowGrade = Elist[-1][1]
nowRank = 1
for i in range(n):
    if Elist[-1-i][1] != nowGrade:
        nowRank = 1+i
        nowGrade = Elist[-1-i][1]
    if nowRank < int(result[Elist[-1-i][0]][0]):
        result[Elist[-1-i][0]] = str(nowRank)+" E"

ID = []
for i in range(m):
    ID.append(int(input("")))

for id in ID:
    if id in result:
        print(result[id])
    else:
        print("N/A"
              )

