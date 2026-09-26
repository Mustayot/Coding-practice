#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

inline constexpr auto sq = [](auto x){
    return x * x;
};

struct sideLength{
    int a{};
    int b{};
    int c{};
};

sideLength get_sideLenght(){
    struct sideLength s{};
    cin >> s.a >> s.b >> s.c;
    return s;
}

vector<int> getOrder_sides(const sideLength& s){
    vector<int> sides = {s.a, s.b, s.c};
    sort(sides.begin(), sides.end());
    return sides;
}

bool is_triangle(const vector<int>& sides){
    return sides[0] + sides[1] > sides[2];
}

bool is_right(const vector<int>& sides){
    if (!is_triangle(sides)){
        return false;
    }
    return sq(sides[0]) + sq(sides[1]) == sq(sides[2]);
}

bool is_acute(const vector<int>& sides){
    if (!is_triangle(sides)){
        return false;
    }
    return sq(sides[0]) + sq(sides[1]) > sq(sides[2]);
}

bool is_obtuse(const vector<int>& sides){
    if (!is_triangle(sides)){
        return false;
    }
    return sq(sides[0]) + sq(sides[1]) < sq(sides[2]);
}

bool is_isosceles(const vector<int>& sides){
    if (!is_triangle(sides)){
        return false;
    }
    return sides[0] == sides[1] || sides[0] == sides[2] || sides[1] == sides[2];
}

bool is_equilateral(const vector<int>& sides){
    if (!is_triangle(sides)){
        return false;
    }
    return sides[0] == sides[1] && sides[1] == sides[2];
}

int main(){
    sideLength s =get_sideLenght();
    vector<int> sides = getOrder_sides(s);
    if (!is_triangle(sides)){
        cout << "Not triangle" << '\n';
    }
    if (is_right(sides)){
        cout << "Right triangle" << '\n';
    }
    else if (is_acute(sides)){
        cout << "Acute triangle" << '\n';
    }
    else if (is_obtuse(sides)){
        cout << "Obtuse triangle" << '\n';
    }
    if (is_isosceles(sides)){
        cout << "Isosceles triangle" << '\n';
    }
    if (is_equilateral(sides)){
        cout << "Equilateral triangle" << '\n';
    }
    return 0;    
}