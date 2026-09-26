#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double t{};
    long long n{};
    cin >> t >> n;
    double result = t / n;
    long long cup = n * 2;
    cout << fixed << setprecision(3) << result << '\n';
    cout << cup << '\n';
    return 0;
}