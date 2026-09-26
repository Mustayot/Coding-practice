import math

def get_info():
    m, t, s = map(int, input().strip().split())
    return m, t, s

def calculate():
    m, t, s = get_info()
    if t == 0:
        subtraction = m
    else:
        subtraction = math.ceil(s / t)
    remainder = m - subtraction
    if remainder >= 0:
        pass
    else:
        remainder = 0
    return remainder

def main():
    remainder = calculate()
    print(remainder)

if __name__ == "__main__":
    main()
