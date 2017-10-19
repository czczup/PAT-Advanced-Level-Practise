number = [int(i) for i in input("").split(" ")[1:]]
for i in number:
    if number.count(i)==1:
        print(i)
        break
else:
    print("None")
#短小精悍，但会超时

number = [int(i) for i in input("").split(" ")[1:]]
hash = [0]*10001
for i in number:
    hash[i] += 1
for i in number:
    if hash[i] == 1:
        print(i)
        break
else:
    print("None")
#还是超时，没救了