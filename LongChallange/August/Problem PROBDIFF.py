import collections
try:
    T=int(input())
    n=0
    
    while(n<T):
        l=list(map(int,input().split()))
        #print(l)
        counter=collections.Counter(l)
        x=list(counter.values())
        if len(x)==1:
            print('0')
        elif x[0]==x[1]:
            print('2')
        else:
            s=set(l)
            if(len(s)==len(l) or len(s)==len(l)-1 ):
                print(round(len(l)/2))
        
            elif(len(s)==2):
                print('1')
            else:
                print('0')
        
            
        n+=1
except:
    pass