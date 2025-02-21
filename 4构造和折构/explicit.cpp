class Maker
{
    public:
    //explicit在只有一个参数或其他参数有默认值
    explicit Maker(int n)//防止编译器优化Maker m =10
    {

    }
};
int main()
{
    Maker m=10;
}