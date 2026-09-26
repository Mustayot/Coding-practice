#include <iostream>
#include <iomanip>
using namespace std;

struct Info{
    double m{};
    double h{};
};

Info get_info(){
    struct Info s{};
    cin >> s.m >> s.h;
    return s;
}

double calculate_BMI(const Info& s){
    double BMI{};
    BMI = s.m / (s.h * s.h);
    return BMI;
}

bool is_thin(double BMI){
    if (BMI < 18.5){
        return true;
    }
    else{
        return false;
    }
}

bool is_ok( double BMI){
    if (BMI < 24 && BMI >= 18.5){
        return true;
    }
    else{
        return false;
    }
}

bool is_fat(double BMI){
    if (BMI >= 24){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Info s = get_info();
    double BMI = calculate_BMI(s);
    if(is_thin(BMI)){
        cout << "Underweight" << '\n';
    }
    else if (is_ok(BMI)){
        cout << "Normal";
    }
    else if (is_fat(BMI)){
        cout << setprecision(6) << BMI << '\n'
             << "Overweight" << '\n';
    }
    return 0;
}