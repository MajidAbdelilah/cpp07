#include <stdexcept>

template<typename T>
class Array
{
    public:
        Array() : array(NULL), len(0) {}
        Array(unsigned int n) : array(new T[n]), len(n) {
            for (unsigned int i = 0; i < n; i++)
            {
                array[i] = T();
            }
        }
        Array(Array const &src) : array(new T[src.len]), len(src.len)
        {
            for (unsigned int i = 0; i < len; i++)
            {
                array[i] = src.array[i];
            }
        }
        ~Array()
        {
            delete[] array;
        }
        Array &operator=(Array const &rhs)
        {
            if (this != &rhs)
            {
                delete[] array;
                array = new T[rhs.len];
                len = rhs.len;
                for (unsigned int i = 0; i < len; i++)
                {
                    array[i] = rhs.array[i];
                }
            }
            return *this;
        }
        T &operator[](unsigned int i)
        {
            if (i >= len || array == NULL)
                throw std::out_of_range("Index out of range");
            return array[i];
        }
        unsigned int size() const
        {
            return len;
        }
    
    private:
        T *array;
        unsigned int len;
};