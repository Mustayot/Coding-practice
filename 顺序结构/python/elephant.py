import math

def get_input():
    hr = input().strip().split(" ")
    h = hr[0]
    r = hr[1]
    return int(h), int(r)

def cal_volnume():
    h, r = get_input()
    pi = 3.14
    volnume = (h * r * r *pi) / 1000
    return volnume

def cal_bucket():
    volnume = cal_volnume()
    # 不能 (a + b // b) 因为b是浮点数就无效
    bucket = math.ceil(20 / volnume)
    return bucket

def main():
    bucket = cal_bucket()
    print(int(bucket))

if __name__ == "__main__":
    main()