#返回题目要求的bot和side
def bot_side(N):
    for bot in range(N):
        side = (N - bot)//2 + 1
        if(bot+side*2 == N+2 and bot>=side):
            return bot,side,bot-2
if __name__ == '__main__':
    string = input("")
    N = len(string)
    bot,side,space = bot_side(N)
    #输出图形
    for i in range(side-1):
        print(string[i]+" "*space+string[-1-i])
    print(string[i+1:-i-1])



