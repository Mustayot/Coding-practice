def get_input():
    a, b = map(int, input().strip().split())
    return a, b

def calculate():
    a, b = get_input()
    total = float(a * 10 + b)
    pen_num = total // 19
    return pen_num

def main():
    pen_num = int(calculate())
    print(pen_num)

if __name__ == "__main__":
    main()