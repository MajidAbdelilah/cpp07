#pragma once
template<typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T a, T b) {
	bool is_smaller = a < b;
    return is_smaller ? a : b;
}

template<typename T>
T max(T a, T b) {
    bool is_bigger = a > b;
	return is_bigger ? a : b;
}