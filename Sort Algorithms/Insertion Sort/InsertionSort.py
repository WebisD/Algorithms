import numpy as np

def InsertionSort(lista):

    for i in range(1, len(lista)):                      ### n
            key = lista[i]                              ### (n-1)
            j = i - 1                                   ### (n-1)
            while (j>=0) and (lista[j] > key):          ### H // (n-1) incluso
                lista[j+1] = lista[j]                   ### H - 1(n-1) = H - (n-1)
                j = j-1                                 ### H - 1(n-1) = H - (n-1)
            
            lista[j+1] = key                            ### (n-1)

    return lista                                        ### 1


v = np.random.randint(1,1000,10)
print(v)
InsertionSort(v)
print(v)