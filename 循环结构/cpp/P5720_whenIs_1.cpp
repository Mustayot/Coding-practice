#include <iostream>
using namespace std;

int get_length(){
    int a{};
    cin >> a;
    return a;
}

int lengthIs_1(int a){
    int day{1};
    while (a > 1){
        a /= 2;
        day += 1;
    }
    return day;
}

int main(){
    int a = get_length();
    int day = lengthIs_1(a);
    cout << day << '\n';
    return 0;
}