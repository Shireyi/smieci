#include <iostream>

using namespace std;
string login, haslo;


int main()
{
    cout << "podaj login frajerze:";
    cin >>login;
    cout << "podaj haslo frajerze:";
    cin>>haslo;

    if ((login== "alex")&&(haslo=="gej"))
        cout<<"udalo sie zalogowac";
        else
            cout<<"nie tym razem kolego";




    return 0;
}
