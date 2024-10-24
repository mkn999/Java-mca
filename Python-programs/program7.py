def create_list():
    global my_tuple
    my_tuple = ()
    print("Empty Tuple created")
    print("\n")

def add_items(my_tuple,element):
    my_tuple += (element)
    print(f"added {element} ")

   

def display():
    for x in my_tuple:
        print(x)
    print("\n")


while True:
    print("Choose an action")
    print("1.Create a Tuple")
    print("2.Add Items")
    print("3.Display Tuple")
    choice = int(input("Enter a option:"))
    if choice ==1 :
        create_list()
    elif choice == 2:
        element = input("Enter an element to add: ")
        my_tuple = add_items(my_tuple,element)
            
    elif choice == 3:
        display()
    else:
        print("Enter a valid option")

