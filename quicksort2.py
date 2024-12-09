# Function to perform quick sort with the first element as the pivot
def quick_sort(arr, low, high):
    """Sort an array using Quick Sort algorithm with the first element as the pivot."""
    if low < high:
        pivot_index = partition(arr, low, high)
        quick_sort(arr, low, pivot_index - 1)
        quick_sort(arr, pivot_index + 1, high)

# Partition function for quick sort
def partition(arr, low, high):
    pivot = arr[low]  # Taking the first element as the pivot
    i = low + 1
    for j in range(low + 1, high + 1):
        if arr[j] < pivot:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
    arr[low], arr[i - 1] = arr[i - 1], arr[low]
    return i - 1

# Function to display the menu
def display_menu():
    print("\nMenu:")
    print("1. Sort the SE scores in ascending order")
    print("2. Display the top five scores")
    print("3. Exit")

# Function to display the top five scores
def display_top_five(arr):
 print("Top five scores:", arr[-5:])

# Program initialization
SE = []  # List to store the scores of SE students
n = int(input("Enter the number of students in SE: "))

print("Enter the scores of", n, "students:")
for i in range(n):
    score = float(input(f"Enter score of student {i+1}: "))
    SE.append(score)

flag = 1  # Flag to control the menu loop (1 means active, 0 means exit)

while flag == 1:
    display_menu()
    choice = input("Enter your choice: ")

    if choice == '1':
        quick_sort(SE, 0, len(SE) - 1)
        print("\nSorted SE scores in ascending order:\n", SE)
    elif choice == '2':
        display_top_five(SE)
    elif choice == '3':
        print("Exiting the program.")
        flag = 0  # Exit the loop
    else:
        print("Invalid choice. Please enter a valid option.")
