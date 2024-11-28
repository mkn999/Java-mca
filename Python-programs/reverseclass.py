

class rev:
    def __init__(self,stri):
        self.str = stri[::-1]
    
    def dis(self):
        print(f"{self.str}")

i = rev("Hello this is my world")
i.dis()