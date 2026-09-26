def get_time():
    a, b, c, d = map(int, input().strip().split())
    return a, b, c, d

def calculate_time():
    a, b, c, d = get_time()
    if b <= d:
        timea = c - a
        timeb = d - b
        return timea, timeb
    else:
        timea = c - a - 1
        timeb = abs(60 - b) + abs(d)
        return timea, timeb

def main():
    timea, timeb = calculate_time()
    print(timea, timeb)

if __name__ == "__main__":
    main()