with open("names.md", "r") as file:
    for line in file:
        line = line.rstrip()
        print(f"{line}")
