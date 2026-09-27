#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n{};
    int k{};
    cin >> k;
    n = (sqrt(8 * k + 1) - 1) / 2;
    int temp = floor(sqrt(8 * k + 1));
    int result{};
    int left_days{};
    left_days = k - ((n * (n + 1)) / 2);
    int count{1};
    if (temp * temp == (8 * k + 1)){
        for (int i{1}; i <= n; ++i){
            result += i * i;
        }
    }
    else {
        for (int i{1}; i <= n; ++i){
            result += i * i;
            ++count;
    }
    result += count * left_days;
    }
    cout << result << '\n'; 
    return 0;
}