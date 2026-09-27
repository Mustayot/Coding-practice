#include <iostream>
using namespace std;

/*
struct Numbers{
    int n{};
    int x{};
};

Numbers get_number(){
    struct Numbers num{};
    cin >> num.n >> num.x;
    return num;
}

int single_digitTimes(const Numbers& num, int i){
    int units = i;
    int times{};
    while (units > 0){
        int digit = units % 10;
        if (digit == num.x){
            ++times;
        }
        units /= 10;
    }
    return times;
}

int main(){
    Numbers num = get_number();
    int total_times{};
    for (int i{1}; i <= num.n; ++i){
        total_times += single_digitTimes(num, i);
    }
    cout << total_times << '\n';
    return 0;
}
*/

struct Numbers{
    int n{};
    int x{};
};

Numbers get_number(){
    struct Numbers num{};
    cin >> num.n >> num.x;
    return num;
}

int single_digitTimes(const Numbers& num, int i){
    int times{};
    string integerTo_string = to_string(i);
    char target = '0' + num.x;
    for (int j{}; j < integerTo_string.size(); ++j){
        char temp = integerTo_string[j];
        if (temp == target){
            ++times;
        } 
    }
    return times;
}

int main(){
    Numbers num = get_number();
    int total_times{};
    for (int i{1}; i <= num.n; ++i){
        total_times += single_digitTimes(num, i);
    }
    cout << total_times << '\n';
    return 0;
}