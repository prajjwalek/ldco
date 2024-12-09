def initMarks():
    arr = []
    n = int(input("Enter the number of Percentages to be added to the list: "))
    for i in range(0, n):
            ele = float(input("Enter the Percentage: "))
            arr.append(ele)
    return arr
 
 
def selectSort(LIST):
    for i in range(0, len(LIST)):
        min = i
        for j in range(i+1, len(LIST)):
            if LIST[min] > LIST[j]:
                min = j
        temp = LIST[min]
        LIST[min] = LIST[i]
        LIST[i] = temp
    return LIST
 
 
def bubbleSort(LIST):
    for i in range(len(LIST)):
        for j in range(len(LIST)):
            if i == j:
                continue
            else:
                if LIST[i] < LIST[j]:
                    temp = LIST[i]
                    LIST[i] = LIST[j]
                    LIST[j] = temp
    return LIST
 
percentages = initMarks()
print(selectSort(percentages))
print(bubbleSort(percentages))
 