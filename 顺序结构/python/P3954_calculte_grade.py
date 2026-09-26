def get_grade():
    A, B, C = map(int, input().strip().split())
    return A, B, C

def calculate_grade():
    A, B, C = get_grade()
    total = (A * .2) + (B * .3) + (C * .5)
    return total

def main():
    total = int(calculate_grade())
    print(total)

if __name__ == "__main__":
    main()