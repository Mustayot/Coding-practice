import math

def get_input():
    s, v = map(int, input().strip().split())
    return math.ceil(s / v)

def give_time():
    x = get_input()
    deadline = 8 * 60
    deadline = 480 - 10
    deadline = 470 - x
    if deadline >= 0:
        hour = (470 - x) // 60
        minute = (470 - x) % 60
    else:
        hour = (470 - x + 1440) // 60
        minute = (470 - x + 1440) % 60
    return hour, minute

def main():
    hour, minute = give_time()
    print(f"{hour:02d}:{minute:02d}")

if __name__ == "__main__":
    main()