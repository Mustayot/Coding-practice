def get_book_num():
    while True:
        bn = int(input("how many books do u want?\n"))
        if bn < 0.:
            print("wht?")
            continue
        else:
            break
    return bn
        
def award(bn, books):
    for _ in range(bn):
        name = input("which book?\n")
        while True:
            awards = int(input("how many points d u wanna award with?\n"))
            if 0 > awards or awards > 10:
                print("only between 0 - 10")
                continue
            else:
                break
        books[name] = awards

books = {}
bn = get_book_num()    
award(bn, books)            
print(books)


