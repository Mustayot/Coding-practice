T = int(input().strip())

if T == 1:
    print("I love Luogu!")
elif T == 2:
    print(2 + 4, 10 - 2 - 4)
elif T == 3:
    print(14 // 4)
    print(3 * 4)
    print(14 % 4)
elif T == 4:
    print(f"{500 / 3:.3f}")
elif T == 5:
    print(15)
elif T == 6:
    # 修改：使用 .6g 模拟 C++ 默认的 6 位有效数字
    print(f"{(9**2 + 6**2) ** 0.5:.6g}")  
elif T == 7:
    print(110)
    print(90)
    print(0)
elif T == 8:
    pi = 3.141593
    r = 5
    # 修改：同样使用 .6g
    print(f"{2 * pi * r:.6g}")          
    print(f"{pi * r * r:.6g}")          
    print(f"{4 / 3 * pi * r**3:.6g}")   
elif T == 9:
    print(22)
elif T == 10:
    print(9)
elif T == 11:
    # 修改：使用 .6g
    print(f"{100 / 3:.6g}")             
elif T == 12:
    print(13)
    print("R")
elif T == 13:
    pi = 3.141593
    v1 = 4 / 3 * pi * (4**3)
    v2 = 4 / 3 * pi * (10**3)
    total_v = v1 + v2
    edge = total_v ** (1/3)
    print(int(edge))
elif T == 14:
    print(50)