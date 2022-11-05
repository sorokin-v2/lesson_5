#include <iostream>
#include <vector>
#include <algorithm>

class Get_sum {
public:
    Get_sum(const std::vector<int>& src) {
        _arr = src;
    }
    int operator()() {
        int sum = 0;
        std::for_each(_arr.begin(), _arr.end(), [&sum](const int& val) {if (val % 3 == 0) sum += val; });
        return sum;
    }
private:
    std::vector<int> _arr;
};

struct Get_count {
public:
    Get_count(const std::vector<int>& src) {
        _arr = src;
    }
    int operator()() {
        int sum = 0;
        std::for_each(_arr.begin(), _arr.end(), [&sum](const int& val) {if (val % 3 == 0) ++sum; });
        return sum;
    }
private:
    std::vector<int>_arr;
};

int main()
{
    Get_sum get_sum(std::vector<int> {4, 1, 3, 6, 25, 54});
    std::cout << "get_sum() = " << get_sum() << std::endl;

    Get_count get_count(std::vector<int> {4, 1, 3, 6, 25, 54});
    std::cout << "get_count() = " << get_count() << std::endl;
}

