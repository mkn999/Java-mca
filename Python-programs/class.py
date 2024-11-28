class Animal:
    def __init__(self,name): #constructor
        self.name = name

    def sound(self):
        print(f"{self.name} is making sound")

my_cat = Animal("Cat")
my_cat.sound()