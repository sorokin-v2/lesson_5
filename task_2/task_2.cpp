#include <iostream>
#include <vector>

template <class T>
class table {
public:
    table(const int rows, const int cols) : _rows{ rows }, _cols{ cols } {
        _table.resize(_rows, std::vector<T>(_cols, 0));
    }

    std::pair <int, int> Size() const {
        return std::make_pair(_rows, _cols);
    }

    std::vector<T>& operator[] (const int index) {
        return _table[index];
    }
    const std::vector<T>& operator[](const int index) const {
        return _table[index];
    }
private:
    std::vector<std::vector<T>>_table;
    int _rows{ 0 };
    int _cols{ 0 };
};

int main()
{
    auto test = table<int>(2, 3);
    test[0][0] = 4;
    std::cout << test[0][0]; // выводит 4
}

