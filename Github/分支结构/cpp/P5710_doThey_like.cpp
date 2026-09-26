#include <iostream>
using namespace std;

int get_x(){
    int x{};
    cin >> x;
    return x;
}

bool is_even(int x){
    if (x % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

bool isBetween_4and12(int x){
    if (4 < x && x <= 12){
        return true;
    }
    else{
        return false;
    }
}

int a_like(bool p1, bool p2){
    if (p1 && p2){
        return 1;
    }
    else{
        return 0;
    }
}

int u_like(bool p1, bool p2){
    if (p1 || p2){
        return 1;
    }
    else{
        return 0;
    }    
}

int b_like(bool p1, bool p2){
    if (p1 != p2){
        return 1;
    }
    else{
        return 0;
    }    
}

int z_like(bool p1, bool p2){
    if (!p1 && !p2){
        return 1;
    }
    else{
        return 0;
    }    
}

int main(){
    int x = get_x();
    bool p1 = is_even(x);
    bool p2 = isBetween_4and12(x);
    cout << a_like(p1, p2) << ' ' 
         << u_like(p1, p2) << ' '
         << b_like(p1, p2) << ' '
         << z_like(p1, p2) << '\n';
    return 0;
}