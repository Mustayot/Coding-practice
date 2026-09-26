#include <iostream>
using namespace std;

int main(){
    // 如果不初始化，会打印内存地址
    int x{};
    cout << x<< '\n';
    return 0;
}