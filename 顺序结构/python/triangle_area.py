def get_side_len():
    side_len = input().strip().split(" ")
    a = side_len[0]
    b = side_len[1]
    c = side_len[2]
    return float(a), float(b), float(c)

def assert_p():
    global a, b, c
    p = (a + b + c) / 2
    return p

def formula():
    global a, b, c
    p = assert_p()
    x =  p * (p-a) * (p-b) * (p-c)
    area = x ** 0.5
    return round(area, 1)

def read_input():
    global a, b, c
    x, y, z = sorted([a, b, c])
    if x + y < z:
        raise ValueError("itz not a triangle")

def main():
    area = formula()
    print(area)

if __name__ == "__main__":
    a, b, c = get_side_len()
    main()