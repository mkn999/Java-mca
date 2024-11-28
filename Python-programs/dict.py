cars = {
    
    'Brand':'BMW',
    'Model':'320D',
    'wanted':'yes'
}

cars['Model'] = '530D'
cars.update({"Brand": 'Beverain Motor Works'})
cars.pop('wanted')
#print(cars['Brand'])
#print(cars.get('Model'))
#print(cars.keys())

'''for x in cars:
    print(cars)'''
for y in cars:
    print(cars[y])