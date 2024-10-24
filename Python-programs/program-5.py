class StringReverse:
    def __init__(self,inp_string):
        self.rev = inp_string[::-1]
        # self.rev_str = "".join(self.rev)

    def display(self):
        return f"The reverse of {self.rev}"
        
x = StringReverse("Hello World Through Python")
print(x.display())
