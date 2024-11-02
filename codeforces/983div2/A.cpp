#define MAGIC_WORDS std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL);
#ifndef ME
#define uint unsigned // codeforces compiler doesn't know what uint is :/
#endif
#define d1 std::cout<<"debug1"; // print debug macros
#define d2 std::cout<<"debug2";
#define d3 std::cout<<"debug3";

#include <iostream>
#include <iterator>
#include <vector>
//#include <array>
#include <algorithm>
#include <numeric>
#include <cstdint>
//#include <string>
//using namespace std::string_literals;


void inline solve(){
    int n; std::cin >> n;
    std::vector<int> a(2*n); // can be done without vector
    std::copy_n(std::istream_iterator<int>(std::cin), 2 * n, a.begin());
    int sum = std::accumulate(a.begin(), a.end(), 0);
    std::cout << sum % 2 << " ";
    if(sum <= n) std::cout << sum << "\n";
    else std::cout << 2*n - sum << "\n";
}

int main(){
    MAGIC_WORDS
    int t; std::cin>>t;
//    int t = 1;
    for(;t>0;--t) solve();
    return 0;
}
