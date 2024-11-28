
number = int(input("Enter the number:"))
str_n = len(str(number))
print(str_n)
amstrong = 0
temp=number
while temp>0:
    digit = temp%10
    amstrong = amstrong + digit**str_n
    temp = temp //10
if number==amstrong:
    print("Amstrong")
else:
    print("Not amstrong")