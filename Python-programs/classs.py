class student:
    def __init__(self,name):
        self.name = name

    def display(self):
        print(f"{self.name} is my name")





my_name = student("Zeron")
my_name.display()