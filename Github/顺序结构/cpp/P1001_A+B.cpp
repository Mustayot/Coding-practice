#include <iostream>
#include <utility>

using namespace std;

pair<long long, long long> get_num(){
    long long A{};
    long long B{};
    cin >> A >> B;
    return {A, B};
}

long long calculate(){
    auto [A, B] = get_num();
    return A + B;
}

int main(){
    long long C = calculate();
    cout << C << '\n';
    return 0;
}