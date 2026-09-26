#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

struct Sidelength{
    int a{};
    int b{};
    int c{};
};

Sidelength get_side(){
    struct Sidelength s{};
    cin >> s.a >> s.b >> s.c;
    return s;
}


vector<int> order_side(const Sidelength& s){
    vector<int> Sides = {s.a, s.b, s.c};
    sort(Sides.begin(), Sides.end());
    return Sides;
}

int main(){
    Sidelength s = get_side();
    vector<int> Sides = order_side(s);
    int up = Sides[0];
    int down = Sides[2];
    int g = gcd(Sides[0], Sides[2]);
    up /= g;
    down /= g;
    cout << up << "/" << down << '\n';
    return 0;
}