"""
uwu
"""

#Bubble Sort
def bubblesort(arr):
    n = len(arr)
    for i in range(0,n-1,1):
        isSwaped = False
        for j in range(0,n-i-1,1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1] = arr[j+1], arr[j]
                isSwaped = True
        if not isSwaped:
            return
