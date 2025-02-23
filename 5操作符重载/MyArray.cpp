#include "MyArray.h"
MyArray::MyArray()
{
    this->mCapacity = 20;
    this->mSize = 0;
    this->pArray = new int[this->mCapacity];
    for (int i = 0; i < this->mCapacity; i++)
    {
        this->pArray[i] = 0;
    }
}
MyArray::MyArray(const MyArray &arr)
{
    this->mCapacity = arr.mCapacity;
    this->mSize = arr.mSize;
    this->pArray = new int[arr.mCapacity];
    for (int i = 0; i < this->mCapacity; i++)
    {
        this->pArray[i] = arr.pArray[i];
    }
}
MyArray::MyArray(int capacity, int val)
{
    this->mCapacity = capacity;
    this->mSize = capacity;
    this->pArray = new int[capacity];
    for (int i = 0; i < capacity; i++)
    {
        this->pArray[i] = val;
    }
}
MyArray::~MyArray()
{
    if (this->pArray != nullptr)
    {
        delete[] this->pArray;
        this->pArray = nullptr;
    }
}

// 头插
void MyArray::pushFront(int val)
{
    if (this->mSize == this->mCapacity)
        return;
    for (int i = this->mSize; i > 0; i--)
    {
        this->pArray[i] = this->pArray[i - 1];
    }
    this->pArray[0] = val;

    this->mSize++;
}
// 尾插
void MyArray::pushBack(int val)
{
    if (this->mSize == this->mCapacity)
        return;
    this->pArray[this->mSize] = val;
    this->mSize++;
}
// 头删
void MyArray::popFront()
{
    if (this->mSize == 0)
        return;
    for (int i = 1; i < this->mSize; i++)
    {
        this->pArray[i - 1] = this->pArray[i];
    }
    this->mSize--;
}

// 尾删
void MyArray::popBack()
{
    if (this->mSize == 0)
        return;
    this->mSize--;
}

int MyArray::capacity()
{
    return this->mCapacity;
}

int MyArray::size()
{
    return this->mSize;
}
// 插入
void MyArray::insert(int pos, int val)
{
    if (this->mSize == this->mCapacity)
        return;
    if (pos < 0 || pos > this->mSize - 1)
        pos = this->mSize;
    for (int i = this->mSize - 1; i >= pos; i--)
        this->pArray[i + 1] = this->pArray[i];

    this->pArray[pos] = val;
    this->mSize++;
}

int &MyArray::get(int pos)
{
    return this->pArray[pos];
}

void MyArray::set(int pos, int val)
{
    if (pos < 0 || pos > this->mCapacity - 1)
        return;
    this->pArray[pos] = val;
}
