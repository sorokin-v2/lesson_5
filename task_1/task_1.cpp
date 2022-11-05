#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
T squaring(const T& src) {
    return src * src;
}

template <class T>
std::vector<T> squaring(const std::vector<T>& src) {
    std::vector<T> out(src);
    std::for_each(out.begin(), out.end(), [](T& val) {val = val * val; });
    return out;
}


int main()
{
    std::cout << squaring(4) << " " << squaring(4.1);
    std::cout << std::endl;
    for (const auto& val : squaring(std::vector<int>{1, 2, 3, 4, 5, 6})) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    for (const auto& val : squaring(std::vector<double>{1.5, 2.5, 3.5, 4.5, 5, 6})) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

