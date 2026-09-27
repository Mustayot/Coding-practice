#include <iostream>
using namespace std;

int main(){
    int n{100};
    int result{};
    for (int i{1}; i <= n; ++i){
        result += i;
    }
    cout << result << '\n';
    return 0;
}