#include <iostream>
template <typename T>

T maximo (const T& a, const T& b){
    return (a < b) ? b : a;
}

// int maximo(int a, int b) {
//     return (a < b) ? b : a;
// }

int main() {
    std::cout << maximo(3, 7)      << '\n';   // 7
    std::cout << maximo(2.5, 1.75) << '\n';   // 2
}