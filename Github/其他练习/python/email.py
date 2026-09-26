email = input("whts ur email address?\n")
email = email.strip()
try:
    username, domain = email.split("@")
except ValueError:
    print("wht?")

try:
    if username and "." in domain:
        print("valid")
    else:
        print("invalid")
except NameError:
    print("try again plz")

x = list("abc")
print(f"{x[0]}")