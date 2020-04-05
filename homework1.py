import numpy as np 
import matplotlib.pyplot as plt

def m_diag(n):
    Hn=np.ones((n,n))
    for i in range(n):
        Hn[0,i]=i+1
    for x in range(n-1):
        for y in range(n):
            Hn[x+1][y]=Hn[x][y]+1
    Hn=1/Hn
    E,psiT = np.linalg.eigh(Hn)
    result=np.log(abs(E.max())/abs(E.min()))
    print(E)
    print(result)
    return E,result

x=np.arange(8)+1
nresult=np.arange(8)
for i in range(8):
    print("n=",i+1)
    E,result=m_diag(i+1)
    nresult[i]=result
print(nresult)
plt.plot(x,nresult)
plt.show()