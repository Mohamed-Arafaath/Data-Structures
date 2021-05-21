#include <iostream>
using namespace std;

void fun(int x)
{
    if (x > 0)
    {   
        /*cout << x << endl;*///Assending recursion - o/p: 3 2 1
        fun(x - 1);
        cout << x ;//Descending recursion - o/p: 1 2 3
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}

