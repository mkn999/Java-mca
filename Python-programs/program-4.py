class Bank:
  def __init__(self,name,balance):
    self.name = name
    self.balance = balance

  def deposit(self,amount):
    if amount > 0:
      self.balance += amount
      return f"Deposited ${amount}. Current balance ${self.balance}"
    else:
      return "Invalid deposit amount. Amount must be greater than 0."
  
  def withdraw(self,amount):
    if amount > 0 and amount <= self.balance:
      self.balance -= amount
      return f"Withdrew ${amount}. Current balance ${self.balance}"
  
  def display(self):
    return f"This account belongs to {self.name} and has balance of ${self.balance}"
  

user_abh = Bank("Abhishek",10000); 
print(user_abh.display())
print(user_abh.deposit(111))
print(user_abh.withdraw(11901))
