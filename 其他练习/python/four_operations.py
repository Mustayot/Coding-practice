def get_num():
    x = int(input("whts x?\n"))
    y = int(input("whts y?\n"))
    return x, y
def choose_way():
    way = input("which way do u wanna use to calculate\n")
    way = way.lower().strip()
    return way    
def calculate_plus(a, b):
    return a + b
def calculate_mutiple(a, b):
    return a * b
def calculate_subtraction(a, b):
    return a - b
def calculate_division(a, b):
    return a / b
    
a, b = get_num()
way = choose_way()

if way == "plus":
    result = calculate_plus(a, b)
    print(result)
elif way == "multiplication":
    result = calculate_mutiple(a, b)
    print(result)
elif way == "subtraction":
    result = calculate_subtraction(a, b)
    print(result)
elif way == "division":
    result = calculate_division(a, b)
    print(result)
else:
    print("only plus, multiplication, subtration and division")