#include <unistd.h>
template <class T>
class MyArray
{
public:
    MyArray(int capacity)
    {
        this->mCapacity = capacity;
        this->mSize = 0;

        //T如果时Maker,调用无参构造
        p = new T[this->mCapacity];
    }

    ~MyArray()
    {
        if (this->p != NULL)
        {
            delete[] p;
            p = NULL;
        }
    }

    int getSize()
    {
        return this->mSize;
    }

    // 拷贝构造
    MyArray(const MyArray &arr)
    {
        this->mCapacity = arr->mCapacity;
        this->mSize = arr->mSize;
        p = new T[arr.mCapacity];

        for (int i = 0; i < this->mSize; i++)
        {
            p[i] = arr.p[i];
        }
    }

    // 赋值函数
    MyArray &operator=(const MyArray &arr)
    {
        if (this->p != NULL)
        {
            delete[] this->p;
            this->p = NULL;
        }

        p = new T[arr.mCapacity];
        this->mSize = arr.mSize;
        this->mCapacity = arr.mCapacity;
        for (int i = 0; i < arr.mSize; i++)
        {
            p[i] = arr.p[i];
        }

        return *this;
    }
    // 重载[]
    T &operator[](int index)
    {
        return this->p[index];
    }

    // 尾插
    void Push_Back(const T &val)
    {
        if (this->mSize == this->mCapacity)
        {
            return;
        }

        this->p[this->mSize++] = val;
    }

    // 尾删
    void Pop_Back()
    {
        if (this->mSize == 0)
            return;
        this->mSize--;
    }

private:
    T *p;
    int mCapacity;
    int mSize;
};