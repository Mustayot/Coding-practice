def get_num():
    num = input().strip()
    return num

def judge_a():
    global n
    if n % 2 == 0 and 4 < n <= 12:
        a = 1
    else:
        a = 0
    return a

def judge_U():
    global n
    if n % 2 == 0 or 4 < n <= 12:
        U = 1
    else:
        U = 0
    return U

def judge_b():
    global n
    if n % 2 == 0 and (n <= 4 or 12 < n):
        b = 1
    elif n % 2 == 1 and 4 < n <= 12:
        b = 1
    else:
        b = 0
    return b

def judge_z():
    if n % 2 == 1 and (n <= 4 or 12 < n):
        z = 1
    else:
        z = 0
    return z

def main():
    a = judge_a()
    b = judge_b()
    U = judge_U()
    z= judge_z()
    print(f"{a} {U} {b} {z}")

if __name__ == "__main__":
    n = int(get_num())
    main()
