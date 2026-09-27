#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double PI = acos(-1.0);

/*
inline constexpr auto newpow = [](auto x, auto n){
    double result = 1.0;
    for (int i = 0; i < n; ++i){
        result = x * result;
    }
    return result;
};
*/

struct Term{
    int maxTerms{};
};

Term get_term(){
    struct Term s{};
    cin >> s.maxTerms;
    return s;
}

double calculatePi(const Term& s){
    int n = s.maxTerms;
    double sum{};
    for (int i = 0; i < n; ++i){
        double result = pow(-1, i) / (2 * i + 1);
        sum = sum + result;
    }
    return 4 * sum;
}

double calculatePi(double precision){
    int n = precision;
    double sum{};
    for (int i = 0; fabs(pow(-1, i) / (2 * i + 1)) >= precision; ++i){
        double result = pow(-1, i) / (2 * i + 1);
        sum = sum + result;
    }
    return 4 * sum;
}    

int get_Precisionterm(double precision){
    int i{};
    while(true){
        double term = 1.0 / (2.0 * i + 1.0);
        if(term < precision){
            break;
        }
        else{
            i++;
        }
    }
    return i;
}

int main(){
    Term s{};
    while (true){
        s = get_term();
        if (s.maxTerms > 0){
            break;
        }
        else{
            cerr << "not valid" << '\n';
            continue;
        }
    }
    cout << PI << '\n';
    cout << fixed << setprecision(10) << calculatePi(s) << '\n';
    double precision_pi = calculatePi(1e-6);
    cout << precision_pi << '\n';
    cout << fabs(precision_pi - PI) << '\n';
    cout << get_Precisionterm(1e-6) <<'\n';
    return 0;
}