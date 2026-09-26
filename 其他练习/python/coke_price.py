def type():
    type = input("wht d u want?\n")
    return type
     
def quantity():
    number = int(input("plz input how many coke du u want\n"))
    return number

def calculate(b):
    total = b * 3.5
    return total

a = type()
b = quantity()
c = calculate(b)

print(f"u want {b} {a},ur total price is {c}")