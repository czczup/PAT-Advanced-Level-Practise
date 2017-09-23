#开挂的感觉
N = int(input(""))
for i in range(N):
    a,b,c = [int(i) for i in input("").split(" ")]
    if(a+b>c):
        print("Case #"+str(i+1)+": true")
    else:
        print("Case #"+str(i+1)+": false")