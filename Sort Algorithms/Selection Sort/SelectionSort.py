import numpy as np

def SelectionSort(v):
    
    for i in range(0, len(v)-1):               ### n
        smaller = i                            ### n-1
        for j in range(i+1, len(v)):           ### n(n-1) = n²-n
            if v[j] < v[smaller]:              ### H-1(n-1) // PA -> H = (n²+n)/2
                smaller = j                    ### H-1(n-1) // PA -> H = (n²+n)/2
        temp = v[i]                            ### n-1
        v[i] = v[smaller]                      ### n-1
        v[smaller] = temp                      ### n-1
    
    return v                                   ### 1

v = np.random.randint(1,1000,10)

print(v)
SelectionSort(v)
print(v)
