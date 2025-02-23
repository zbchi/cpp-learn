#pragma once
class MyArray
{
public:
    MyArray();
    MyArray(const MyArray &arr);
    MyArray(int capasity, int val = 0);
    ~MyArray();

    // 头插
    void pushFront(int val);
    // 尾插
    void pushBack(int val);
    // 头删
    void popFront();
    // 尾删
    void popBack();
    int size();
    // 插入
    void insert(int pos, int val);
    int capacity();
    int &get(int pos);
    void set(int pos, int val);

private:
    int *pArray;
    int mSize;
    int mCapacity;
};