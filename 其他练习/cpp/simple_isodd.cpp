#include <iostream>
using namespace std;

int get_num(){
    int num{};
    cin >> num;
    return num;
}

bool is_odd(){
    int x = get_num();
    if (x % 2 == 0){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    bool y = is_odd();
    if (y == true){
        cout << "odd" << '\n';
    }
    else{
        cout << "not odd" << '\n';
    }
    return 0;
}