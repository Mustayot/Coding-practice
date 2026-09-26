#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Number{
    int a{};
    int b{};
    int c{};
};

Number get_num(){
    struct Number s{};
    cin >> s.a >> s.b >> s.c;
    return s;
}

vector<int> order_num(const Number& s){
    vector<int> nums = {s.a, s.b, s.c};
    sort(nums.begin(), nums.end());
    return nums;
}

int main(){
    Number s = get_num();
    vector<int> nums = order_num(s);
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << ' ';
    }
    cout << '\n';
    return 0;
}