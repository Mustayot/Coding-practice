#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n{};
    cin >> n;
    int num = 1;
    // 外面的循环只负责换行以及提供 i
    for (int i{}; i < n; ++i){
        /* 
        两种写法 改变j的初始值或者令j < n -i 
        这说明，内嵌循环第一次要执行五次，第二次就是四次，以此类推
        */
        for (int j{n - i}; j > 0; --j){
            cout << setw(2) << setfill('0') << num;
            num += 1;
        }
    cout << '\n';
    }
    return 0;
}