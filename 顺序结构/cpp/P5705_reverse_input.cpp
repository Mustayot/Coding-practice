#include <iostream>
#include <algorithm>
using namespace std;

string get_num(){
    string num{};
    cin >> num;
    return num;
}

string reverse_num(){
    string num = get_num();
    reverse(num.begin(), num.end());
    return num;
}

int main(){
    string num = reverse_num();
    cout << num << '\n';
    return 0;
}