def get_info():
    tn = input().strip().split(" ")
    t = float(tn[0])
    n = float(tn[1])
    return t, n

def calculate():
    t, n = get_info()
    aver = t / n
    total = n * 2
    return aver, total

def main():
    aver, total = calculate()
    aver = round(aver, 3)
    total = int(total)
    print(aver)
    print(total)

if __name__ == "__main__":
    main()