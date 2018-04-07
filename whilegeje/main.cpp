#include <iostream>

using namespace std;
int populacja=1;
int godzin=0;
int main()
{
    while(populacja<=1000000000)
    {
        godzin = godzin + 1;
        populacja = populacja*2;
        cout<<"minelo godzin od nerfa:  "<<godzin<<endl;
        cout<<"liczba wscieklych mainow Hanzo:"<<populacja<<endl;
        cout<<"    "<<endl;
    }
    cout<<"Tu sie od nich roi, mnoza sie przez paczkowanie"<<endl;
    return 0;
}
