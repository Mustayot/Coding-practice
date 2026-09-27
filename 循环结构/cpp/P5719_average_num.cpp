#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>
using namespace std;

struct Background{
    int n{};
    int k{};
};

Background get_background(){
    struct Background b{};
    cin >> b.n >> b.k;
    return b;
}

vector<int> is_divisible(const Background& b){
    vector<int> divisible_nums{};
    for (int i{1}; i < (b.n + 1); ++i){
        if (i % b.k == 0){
            divisible_nums.push_back(i);
        }
    }
    return divisible_nums;
}

vector<int> isNot_divisible(const Background& b){
    vector<int> indivisible_nums{};
    for (int i{1}; i < (b.n + 1); ++i){
        if (i % b.k != 0){
            indivisible_nums.push_back(i);
        }
    }
    return indivisible_nums;
}

double avg_divisible_nums(const vector<int>& divisible_nums){
    return accumulate(divisible_nums.begin(),
    divisible_nums.end(),
    0.0) / divisible_nums.size();
}

double avg_indivisible_nums(const vector<int>& indivisible_nums){
    return accumulate(indivisible_nums.begin(),
    indivisible_nums.end(),
    0.0) / indivisible_nums.size();
}

int main(){
    Background b = get_background();
    vector<int> divisible_nums = is_divisible(b);
    vector<int> indivisible_nums = isNot_divisible(b);
    cout << fixed << setprecision(1) 
         << avg_divisible_nums(divisible_nums)
         << ' '
         << fixed << setprecision(1) 
         << avg_indivisible_nums(indivisible_nums)
         << '\n';
    return 0;
}