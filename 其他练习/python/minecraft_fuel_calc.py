def ask():
    quantity = int(input("how many items do u wanna fire?\n"))
    fuel = input("which fuel do u wanna use?\n")
    return quantity, fuel

def match_fuel(quantity, fuel):
    match fuel:
        case "coal":
            if int(quantity) < 8:
                print("u need 1.0 coal")
            if int(quantity) >= 8:
                coalnum = (int(quantity) + 7) // 8
                print(f"u need {coalnum} coal")
        case "charcoal":
            if int(quantity) < 8:
                print("u need 1.0 charcoal")
            if int(quantity) >= 8:
                charnum = (int(quantity) + 7) // 8
                print(f"u need {charnum} charcoal")
        case "lava":
            lavanum = (int(quantity)) 
            if int(quantity) < 100:
                print("u need 1.0 lava")
            if int(quantity) >= 100:
                lavanum = (int(quantity) + 99) // 100
                print(f"u need {lavanum} lava")
        case _:
            print("no such fuel,try again.")

quantity, fuel = ask()
match_fuel(quantity, fuel)