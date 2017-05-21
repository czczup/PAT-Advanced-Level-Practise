[a,b] = [eval(i) for i in input('').split(" ")]
c = list(str(a + b))
flag = 1
if c[0] == '-':
    flag = -1
    c.pop(0)
lenc = len(c) - 1
for i in range(0,lenc//3):
    c.insert(lenc+1-3*(i+1),',')
if flag == -1:
    c.insert(0,'-')
c = "".join(c)
print(c)

