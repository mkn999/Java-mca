from pymongo import MongoClient

client  = MongoClient("mongodb://localhost:27017")

db = client["lastpro"]

collection = db["test_collection"] 

'''data = {"name": "John", "age": 30, "city": "New York"}
collection.insert_one(data)
print("Document inserted!") '''

result = collection.find_one({"name": "John"})
print(result)


