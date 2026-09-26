import re
email = input("whts ur email?\n")

if re.search(r"^\w+@(\w+\.)?\w+\.(edu|com|org)$", email, re.IGNORECASE):
    print("valid")
else:
    print("invalid")