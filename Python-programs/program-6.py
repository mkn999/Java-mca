def create_list():
    global my_list
    my_list = []
    print("Empty List created")
    print("\n")

def add_items(elements):
    try:
        my_list.append(elements)  # Trying to append to an undefined list
        print(f"{elements} inserted in list")
        print("\n")
    except NameError:
        print("Error: The list is not defined. Please initialize the list first.")
        print("\n")

   

def display():
    for x in my_list:
        print(x)
    print("\n")


while True:
    print("Choose an action")
    print("1.Create a List")
    print("2.Add Items")
    print("3.Display list")
    choice = int(input("Enter a option:"))
    if choice ==1 :
        create_list()
    elif choice == 2:
        element = input("Enter an element to add")
        add_items(element)
    elif choice == 3:
        display()
    else:
        print("Enter a valid option")

