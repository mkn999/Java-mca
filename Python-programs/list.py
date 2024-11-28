list1 = ["123","324","457"]
list2 = ['hello2']
list1.append("he")
list3 = list1.copy() #list1[:] //reverse()
list1.extend(list2)
list1.remove("123")
list1.pop(0)
list1.sort() #sort alphabetically
#list1.clear()
for x in list1:
    print(x)