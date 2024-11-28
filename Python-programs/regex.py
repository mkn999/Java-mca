import re

inp = "enterthedragon"
restring = "123"


def is_Num(inp):
    pattern = r'^[+-]?\d+$'
    return bool(re.match(pattern,inp))

def is_Alpha(inp):
    pattern = r'^[a-zA-Z]+$'
    #return bool(re.match(pattern,inp))
    if re.match(pattern,inp):
        return True
    return False

def Search(inp):
    pattern = r'enter+'
    match = re.findall(pattern,inp)
    if match:
        return len(match)
    return False

def substitute(inp):
    res = re.sub(r'win','won',inp);
    return res

def split(inp):
    pattern = r'[\s]+'  # Matches one or more commas or whitespace
    return len(re.findall(pattern, inp))

def kjc():
    pattern = r'B[AIU]T' #starts with B then followed by A,I or U and ends with T
    strin = 'BAT'
    return bool(re.match(pattern,strin))

print(is_Num(restring))
print(is_Alpha(inp))
print(Search(inp))
print(substitute("I win"))
text = " Hello world wo "
print("The number of white spaces is",split(text))
print(kjc())



