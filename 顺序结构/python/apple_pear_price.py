def get_price():
    number = input("how many apple and pear do you want to buy?\n")
    first, last = number.split(",")
    return int(first), int(last)

def calculate_price(first, last):
    price = first * 5 + last * 4
    return price

first, last = get_price()
price = calculate_price(first, last)

print(f"The total price is {price}")