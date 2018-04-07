#include <iostream>

using namespace std;

int silnia (int x)
{
    if (x==1)
    {
        return 1;
    }else
    {
        return x*silnia(x-1);
    }
}

int main()
{
    int x;
    cin >> x;
    cout<< silnia(x);
}
