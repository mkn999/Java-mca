def fact_r(n):
    if n ==0  or n ==1:
        return 1
    else:
        return n*fact_r(n-1)

number = int(input("enter the number"))
if number<0 or number == 0:
    print("The factorial is not defined for  negative numbers and the factorial for 0 is 1")
else:
    result = fact_r(number)
    print(f"The factorial for {number} is {result}")