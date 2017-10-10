radix_table = {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8,
               '9': 9, 'a': 10, 'b': 11, 'c': 12, 'd': 13, 'e': 14, 'f': 15, 'g': 16, 'h': 17,
               'i': 18, 'j': 19, 'k': 20, 'l': 21, 'm': 22, 'n': 23, 'o': 24, 'p': 25, 'q': 26,
               'r': 27, 's': 28, 't': 29, 'u': 30, 'v': 31, 'w': 32, 'x': 33, 'y': 34, 'z': 35 }

def Radix2Ten(number,radix_in):
    result = 0
    for i in number:
        result = result*radix_in + radix_table[i]
    return result

if __name__ == '__main__':
    n1,n2,tag,radix = [i for i in input().split(" ")]
    radix = int(radix)
    #如果tag是2就交换n1和n2
    if tag == '2':
        n1,n2 = n2,n1
    #先将n1转换为10进制
    N1 = Radix2Ten(n1,radix)
    bot = radix_table[max(n2)]+1
    #最大进制不超过N1+1
    top = max(N1+1,bot)
    #二分法查找进制
    while bot <= top:
        mid = (top+bot)//2
        if Radix2Ten(n2,mid) > N1:
            top = mid - 1
        elif Radix2Ten(n2,mid) < N1:
            bot = mid + 1
        elif Radix2Ten(n2,mid) == N1:
            print(mid)
            break
    else:print("Impossible")




