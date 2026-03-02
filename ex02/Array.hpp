#pragma once

template <typename T>
class Array
{
    private:
        T* _array;
        unsigned int _size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& copy);
        ~Array();
        Array& operator=(const Array& copy);

        T& operator[](unsigned int index) const;

        unsigned int size() const;

    class OutOfBoundsException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

#include "Array.tpp"