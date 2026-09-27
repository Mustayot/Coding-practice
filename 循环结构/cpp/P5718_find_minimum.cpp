#include <iostream>
using namespace std;

int main(){
    int n{};
    cin >> n;
    int minimum{1001};
    for (int i{}; i < n; ++i){
        int x{};
        cin >> x;
        if (x < minimum){
            minimum = x;
        }
    }
    cout << minimum << '\n';
    return 0;
}
