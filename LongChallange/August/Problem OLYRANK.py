# cook your dish here
import numpy as np
try:
    T=int(input())
    n=0
    while(n<T):
        l=list(map(int,input().split()))
        two_split = np.array_split(l, 2)
        a=two_split[0]
        b=two_split[1]
        a=a.sum()
        b=b.sum()
        if a>b:
            print('1')
        else:
            print('2')
        n+=1
        
except:
    pass