# cook your dish here
try:
    for _ in range(int(input())):
        n=int(input())
        if n>=2000:
            print('1')
        elif n>=1600 and n<2000:
            print('2')
        else:
            print('3')
except:
    pass