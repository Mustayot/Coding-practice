import re
name = input("whts ur name?\n").strip()
macthes = re.search(r"^(.+), (.+)$", name)

if macthes:
    last, first = macthes.groups()
    name = f"{last} {first}"

print(name)