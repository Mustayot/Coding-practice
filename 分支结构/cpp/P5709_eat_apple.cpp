#include <iostream>
#include <cmath>
using namespace std;

struct Info{
    double m{};
    double t{};
    double s{};
};

Info get_info(){
    Info n;
    cin >> n.m >> n.t >> n.s;
    return n;
}

int get_left(const Info& n){
    if (n.t == 0){
        int left = 0;
        return left;
    }
    else{
        double eaten_num = ceil(n.s / n.t);
        int left = n.m - eaten_num;
        if (left >=0){ 
            return left;
        }
        else{
            return 0;
        }
    }
}

int main(){
    Info n = get_info();
    int left = get_left(n);
    cout << left << '\n';
    return 0;
}