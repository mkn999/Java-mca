#amstrong number

number = int(input("Enter the number:"))
str_n = len(str(number))
amstrong = 0
temp = number
while temp>0:
    digit = temp%10
    amstrong = amstrong + digit**str_n
    temp = temp //10
if number == amstrong:
    print(f"{number} is an armstrong number")
else:
    print("Not amstrong")