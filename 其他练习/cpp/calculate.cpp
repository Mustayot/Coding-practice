#include <iostream>
#include <limits>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main(){
    int a = 1;
    int b = 1;
    cin >> a >> b;
    cout << add(a, b) << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}