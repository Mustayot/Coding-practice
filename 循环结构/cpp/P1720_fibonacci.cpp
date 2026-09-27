#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int get_num(){
    int n{};
    cin >> n;
    return n;
}

/* 该函数为朴素递归，缓慢
long long fib(int n){
    if (n == 1){
        return 1;
    }
    else if (n == 0){
        return 0;
    }
    else{
        return fib(n - 1) + fib(n - 2);
    }
}
*/

// 递归本身就是在循环，这里做记忆化递归
double fib(int n, vector<long long>& answer, vector<bool>& calculated){
    if (n == 1){
        return 1;
    }
    if (n == 0){
        return 0;
    }
    // 这里判断 第n项有没有被计算过
    if (calculated[n]){
        // 如果被计算过了直接返回第n个答案
        return answer[n];
    }
    else{
        // 如果没有被计算就开始按照递归公式算
        long long result = fib(n - 1, answer, calculated) 
                         + fib(n - 2, answer, calculated);
        // 算完之后赋值第n个答案并且赋值第n个布尔值为真
        // 下次循环不会再算，前面已经直接返回算出的结果
        answer[n] = result;
        calculated[n] = true;
        return result;
    }
}

/*
double fib(int n){
    // 这里如果写 int 会导致溢出从而输出负数
    long long a{0};
    long long b{1};
    if (n == 1){
        return 1;
    }
    if (n == 0){
        return 0;
    }
    for (int i{2}; i <= n; ++i){
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}
*/

int main(){
    int n = get_num();
    /*
       calculated: [false, false, false, false, false, false, ...]
       answer:     [  0  ,   0  ,   0  ,   0  ,   0  ,   0  , ...]
       声明n+1个false的布尔值和n+1个为0的答案
       下标0到n一共n+1个位置
       说明一下，语法上
       vector<类型> 变量{初始化列表};
       vector<类型> 变量(数组大小，初值默认0);
    */
    vector<long long> answer(n + 1, 0);
    vector<bool> calculated(n + 1, false);
    cout << fixed << setprecision(2) << fib(n, answer, calculated) <<'\n';
    return 0;
}