# cook your dish here
try:
    for _ in range(int(input())):
        n=int(input())
        
        s=input()
        t=input()
        x=0
        y=0
        x=s.count('1')
        y=t.count('1')
        print(min(x,y,n//2))
except:
    pass