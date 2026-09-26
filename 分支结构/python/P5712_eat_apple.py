def get_apple():
    x = int(input())
    return x

def main():
    x = get_apple()
    if x == 0:
        print("Today, I ate 0 apple.")
    elif x == 1:
        print("Today, I ate 1 apple.")
    elif x >= 2:
        print(f"Today, I ate {x} apples.")

if __name__ == "__main__":
    main()