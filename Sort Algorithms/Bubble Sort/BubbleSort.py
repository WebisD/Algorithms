import numpy as np

def BubbleSort(v):
    n = len(v)                      ### 1

    for _ in range(n-1):            ### n
        for j in range(n-1):        ### (n)(n-1) = n² -n
            if v[j] > v[j+1]:       ### (n-1)(n-1) = n² -2n + 1
                t = v[j]            ### (n-1)(n-1)
                v[j] = v[j+1]       ### (n-1)(n-1)
                v[j+1] = t          ### (n-1)(n-1)

    return v                        ### 1

 
v = np.random.randint(1,1000,10)

print(v)
BubbleSort(v)
print(v)
