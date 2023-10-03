family_dict = []
family = ["father", "mother", "sister", "brother"]
for i in range(4): 
    name = input(f"What is your {family[i]} name? ")
    age = input("And what about age? ")
    family_dict.append({'name': name, 'age': age})

if family_dict[0]["age"] > family_dict[1]["age"]:
    print(f"your father is older than others with {family_dict[0]['age']} years old")
    print(f"after your father is your mother with {family_dict[1]['age']} years old")
elif family_dict[0]["age"] == family_dict[1]["age"]:
    print("your father and mother they have equal age")
else:
    print(f"your mother is older than others with {family_dict[1]['age']} years old")
    print(f"after your mother is your father with {family_dict[0]['age']} years old")

if family_dict[2]["age"] > family_dict[3]["age"]:
    print(f"in your sister and brother your {family_dict[2]['name']} is older than other with {family_dict[2]['age']} years old")
    print(f"in last your {family_dict[3]['name']} is younger that others with {family_dict[3]['age']} years old")
elif family_dict[2]["age"] == family_dict[3]["age"]:
    print("your brother and sister they have equal age")
else:
    print(f"in your sister and brother your {family_dict[3]['name']} is older than other with {family_dict[3]['age']} years old")
    print(f"in last your {family_dict[2]['name']} is younger that others with {family_dict[2]['age']} years old")
