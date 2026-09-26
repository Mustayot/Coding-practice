#include <iostream>
using namespace std;

long long multiple(long long a, long long b){
    return a * b;
}

int main(){
    long long a, b;
    cin >> a >> b;
    cout << multiple(a, b);
    cin >> a >> b;
    return 0;
}
