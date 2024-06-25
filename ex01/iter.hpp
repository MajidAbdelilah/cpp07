#pragma once
template<typename T>
void iter(T *arr, unsigned long length, void (*f)(T &)) {
    if(arr == 0)
        return ;
    for (unsigned long i = 0; i < length; i++) {
        f(arr[i]);
    }
}