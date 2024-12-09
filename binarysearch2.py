def createList():
    result = []
    n = int(input("Enter the number of students: "))
    print("Enter the roll numbers in Order:")
    for i in range(0, n):
        roll = int(input())
        result.append(roll)
    return result
 
 
#####################
### BINARY SEARCH ###
#####################
def binarySearch(list):
    key = int(input("Enter the Roll number to be checked: "))
    size = len(list)
    start = 0
    end = size - 1
    mid = 0
    flag = 0
    index = 0
    while(start <= end):
        mid = int(start + (end - start)/2)
        
        if list[mid] == key:
            flag = 1
            index = mid    
            break
 
        if key > list[mid]:
            start = mid + 1
        
        if key < list[mid]:
            end = mid - 1
 
    if (flag == 1):
        print(f"Roll Number: {key} was PRESENT (Index: {index})")
    elif (flag == 0):
        print(f"Roll Number: {key} was ABSENT")
 
 
########################
### FIBONACCI SEARCH ###
########################
### TODO
 
 
 
rolls = createList()
binarySearch(rolls)
        