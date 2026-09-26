#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Sidelength{
    double a{};
    double b{};
    double c{};
};

Sidelength get_length(){
    Sidelength s;
    cin >> s.a >> s.b >> s.c;
    return s;
}

double get_p(const Sidelength& s){
    double p{};
    p = (s.a + s.b + s.c) / 2;
    return p;
}

double get_area(){
    Sidelength s = get_length();
    double p = get_p(s);
    double area = sqrt(p * (p - s.a) * (p - s.b) * (p - s.c));
    return area;
}

int main(){
    double result = get_area();
    cout << fixed << setprecision(1) << result << '\n';
    return 0;
}