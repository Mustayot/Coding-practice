#include <iostream>
using namespace std;

double get_x(){
    cout << "whts x?\n";
    double x{};
    cin >> x;
    return x;
}

double double_x(){
    double x = get_x();
    double result{};
    result = x * 2;
    return result;
}

int main(){
    double result = double_x();
    cout << "x * 2 is "<< result << '\n';
    return 0;
}