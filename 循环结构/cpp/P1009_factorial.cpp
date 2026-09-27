#include <iostream>
using namespace std;

struct Number{
    long long n{};
};

Number get_number(){
    struct Number num{};
    cin >> num.n;
    return num;
}

long long factorial(long long n){
    if (n == 1){
        return 1;
    }
    else if (n == 2){
        return 2;
    }
    else{
        return n * factorial(n - 1);
    }
}

int main(){
    Number num = get_number();
    long long n = num.n;
    cout << factorial(n) << '\n';
    return 0;
}
