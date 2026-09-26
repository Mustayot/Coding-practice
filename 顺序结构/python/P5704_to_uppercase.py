def get_input():
    word = input()
    return word

def upper_word():
    word = get_input().upper()
    return word
    
def main():
    word = upper_word()
    print(word)
if __name__ == "__main__":
    main()