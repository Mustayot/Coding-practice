#include <iostream>
#include <iomanip>
#include <cmath>
#include <utility>
#include <format>
using namespace std;

struct toSchool_time{
    double s{};
    double v{};
};

toSchool_time get_sv(){
    toSchool_time l;
    cin >> l.s >> l.v;
    return l;
}

int time_left(const toSchool_time& l){
    double result{};
    result = ceil(l.s / l.v);
    return result;
}

pair <int, int> result_time(){
    toSchool_time l = get_sv();
    int x = time_left(l);
    int h = 470 - x;
    if (h >= 0){
        int hour = floor(h / 60);
        int minute = h % 60;
    return {hour, minute};
    }
    else {
        int hour = floor((h + 1440) / 60);
        int minute = (h + 1440) % 60;
    return {hour, minute};
    }
}

int main(){
    auto [h, m] = result_time();
    cout << format("{:02d}:{:02d}", h, m) << '\n';
}