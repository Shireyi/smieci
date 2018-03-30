#include <iostream>

using namespace std;
string PIN;

int main()
{
    cout << "Nie masz pieniedzy, dzien dobry" << endl;
    cout<< "Dawaj magiczny numerek PIN:";
    cin>> PIN;

    if(PIN=="0000")
    cout<<"Masz szczescie debilu";

    else
    cout<<"No nie zbyt niestety idz sobie plz";


    return 0;
}
