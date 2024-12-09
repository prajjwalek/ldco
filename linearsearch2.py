# Function to create a list of student roll numbers
def createList():
    result = []
    n = int(input("Enter the number of students: "))  # Take the number of students as input
    print("Enter the Roll Numbers: ")
    for i in range(0, n):  # Loop through and input each roll number
        roll = int(input())  # Takes input for each student's roll number
        result.append(roll)   # Adds the roll number to the list
    return result


# Linear Search Function
def linearSearch(list):
    flag = 0
    index = -1
    key = int(input("Enter the Roll Number to be checked: "))  # Take roll number to search for
    for i in range(0, len(list)):  # Corrected loop to check the entire list
        if list[i] == key:
            flag = 1
            index = i
            break  # Stop once the key is found
    if (flag == 1):
        print(f"Roll Number: {key} was PRESENT at Index {index}")
    elif (flag == 0):
        print(f"Roll Number: {key} was ABSENT")


# Sentinel Search Function
def sentinelSearch(list):
    key = int(input("Enter the Roll Number to be checked: "))  # Take roll number to search for
    size = len(list)
    last = list[size - 1]  # Save the last element
    list[size - 1] = key  # Replace the last element with the key value (sentinel)
    i = 0
    flag = 0
    while list[i] != key:  # Search until the key (or sentinel) is found
        i += 1
    list[size - 1] = last  # Restore the last element to its original value
    if (i < size - 1) or (key == list[size - 1]):
        flag = 1
    else:
        flag = 0

    if (flag == 1):
        print(f"Roll Number: {key} was PRESENT at Index {i}")
    elif (flag == 0):
        print(f"Roll Number: {key} was ABSENT")


# Main Program Execution
rolls = createList()  # Create the list of roll numbers

while True:
    print("--------- MENU ----------")
    print("CHOICE 1: Linear Search")
    print("CHOICE 2: Sentinel Search")
    print("CHOICE 3: Break")
    choice = input("Enter a choice: ")  # Get the user's menu choice

    if choice == '1':  # Linear search option
        linearSearch(rolls)
    elif choice == '2':  # Sentinel search option
        sentinelSearch(rolls)
    elif choice == '3':  # Exit the program
        break
    else:
        print("Invalid Choice")  # In case of an invalid choice

 
 
