import numpy as np

def Merge(L, R, V):
    # i = Left index
    # j = Right index
    # k = array V index
    i = j = k = 0
    
    while(i < len(L) and j < len(R)):
        if L[i] < R[j]:
            V[k] = L[i]
            i += 1
        else:
            V[k] = R[j]
            j += 1
        k += 1

    while(i < len(L)):
        V[k] = L[i]
        i += 1
        k+=1

    while(j < len(R)):
        V[k] = R[j]
        j += 1
        k += 1

    return V

#  left index // right index
def MergeSort(v):
    if len(v) > 1:
        # Index of middle
        middle = len(v)//2

        L = v[:middle].copy()
        R = v[middle:].copy()

        MergeSort(L)
        MergeSort(R)

        v = Merge(L, R, v)
    


v = np.random.randint(1,1000,10)
#v = [536, 792, 998,  43, 984, 939, 956, 386, 512, 447]
print(v)
MergeSort(v)
print(v)
