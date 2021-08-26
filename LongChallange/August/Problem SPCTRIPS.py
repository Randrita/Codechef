try:
    for _ in range(int(input())):
        n=int(input())
        cc=0
        for i in range(1,n+1):
            for j in range(i,n+1,i):
                if(j%i==0):
                    for k in range(i,n+1,j):
                        if(k%j==i):
                            cc+=1
    
        print(cc)
except:
    pass