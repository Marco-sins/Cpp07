template <typename T>
Array<T>::Array()
{
    this->_array = new T[0];
    this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->_array = new T[n];
    this->_size = n;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
    this->_array = new T[copy._size];
    this->_size = copy._size;
    for (unsigned int i = 0; i < this->_size; i++)        
        this->_array[i] = copy._array[i];
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->_array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
    if (this != &copy)
    {
        delete[] this->_array;
        this->_array = new T[copy._size];
        this->_size = copy._size;
        for (unsigned int i = 0; i < this->_size; i++)        
            this->_array[i] = copy._array[i];
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index) const
{
    if (index >= this->_size)
        throw OutOfBoundsException();
    return this->_array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return this->_size;
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
    return "Index out of bounds";
}