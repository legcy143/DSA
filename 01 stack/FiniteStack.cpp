#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class FiniteStack
{
    vector<T> vec;
    int current = 0;
    int len = 0;

public:
    FiniteStack(int len)
    {
        this->len = len;
    }

    bool isEmpty()
    {
        return len != current;
    }

    bool push(T val)
    {
        if (this->isEmpty())
        {
            vec[this->current] = val;
            return true;
        }
        return false;
    }
    bool pop()
    {
        if (this->current == 0)
            return false;
        this->current -= 1;
        return true;
    }
};

int main()
{
    cout << "har har maahdev\n";
    FiniteStack<int> st(12);
    st.push(4);
    st.push(23);
    if (st.isEmpty())
    {
        cout << "empty";
    }
    else
    {
        cout << "Not empty";
    }
    return 0;
}