def get_num():
    num = input().strip()
    return num

def main():
    num = get_num()
    for _ in reversed(num):
        print(_, end="")
    print()

main()