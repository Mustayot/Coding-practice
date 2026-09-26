def get_year():
    year = input().strip()
    return int(year)

def is_leapyear():
    year = get_year()
    if year % 4 == 0 and year % 100 != 0:
        x = 1
    elif year % 400 == 0:
        x = 1
    else:
        x = 0
    return x

def main():
    x = is_leapyear()
    print(x)

if __name__ == "__main__":
    main()