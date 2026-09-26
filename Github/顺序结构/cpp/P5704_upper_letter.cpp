#include <iostream>
#include <cctype>
using namespace std;

char get_letter(){
    char letter{};
    cin >> letter;
    return letter;
}

char upper_letter(){
    char letter = toupper(get_letter());
    return letter;
}

int main(){
    char letter = upper_letter();
    cout << letter << '\n';
    return 0;
}