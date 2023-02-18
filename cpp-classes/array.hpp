#include <vector>

template<typename T>
class Array {

public:
    Array() {
        std::vector<T> newArr;
        this->arr = newArr;
    }

    void Add(T value) {
        this->arr.push_back(value);
    }

    T Get(int index) {
        return this->arr[index];
    }

    void Clear() {
        arr.clear();
    }

    std::vector<T> getVector() {
        return arr;
    }

    std::vector<T> arr;
};