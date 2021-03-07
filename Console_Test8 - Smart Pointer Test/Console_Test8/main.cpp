#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
    A()
    {
        cout << "Welcome to A" << endl;
    }

    ~A()
    {
        cout << "Goodbye from A" << endl;
    }

    void print()
    {
        cout << "Print From A" << endl;
    }
};

int main()
{
    {
        shared_ptr<A> sha;
        {
            shared_ptr<A> a_ptr(new A);
            sha = a_ptr;

    //        cout << a_ptr << endl;
    //        cout << sha << endl;
            a_ptr->print();
            sha->print();
        }
        cout << sha << endl;
        sha->print();
    }


    return 1;
}
