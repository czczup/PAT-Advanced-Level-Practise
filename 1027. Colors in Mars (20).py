table = {0: '0', 1: '1', 2: '2', 3: '3', 4: '4', 5: '5', 6: '6', 7: '7', 8: '8',
               9: '9', 10: 'A', 11: 'B', 12: 'C'}
R,G,B = [int(i) for i in input().split(" ")]
print("#",end='')
print(table[R//13]+table[R%13],end='')
print(table[G//13]+table[G%13], end='')
print(table[B//13]+table[B%13], end='')