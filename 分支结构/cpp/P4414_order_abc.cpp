#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Numbers{
    int a{};
    int b{};
    int c{};
};

struct Order{
    char first{};
    char second{};
    char third{};
};

Numbers get_num(){
    struct Numbers num{};
    cin >> num.a >> num.b >> num.c;
    return num;
}

Order get_order(){
    struct Order order{};
    cin >> order.first >> order.second >> order.third;
    return order;
}

vector<int> order_num(const Numbers& num){
    vector<int> ordered_num = {num.a, num.b, num.c};
    sort(ordered_num.begin(), ordered_num.end());
    return ordered_num;
}

int main(){
    Numbers num = get_num();
    Order order = get_order();
    vector<int> ordered_num = order_num(num);
    cout << ordered_num[order.first - 'A'] << ' '
         << ordered_num[order.second - 'A'] << ' '
         << ordered_num[order.third - 'A'] << ' '
         << '\n';
    return 0;
}
