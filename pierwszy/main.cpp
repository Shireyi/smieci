#include <iostream>

using namespace std;
int uczniowie,narkotyki,x,y;
int main()
{
    cout << "Ilu uczniow jest w Twojej klasie cwelu:";
    cin >> uczniowie;
    cout << "Ile narkotykow kupila Twoja mama:";

    cin>> narkotyki;
    x = narkotyki/(uczniowie-1);

    cout<< "Towaru dla kazdego ucznia:"<<x;

    y = narkotyki-x*(uczniowie-1);
    cout<<endl<<"Dla Wers na depresje: "<<y;
    if (uczniowie<=20)
    {
        cout<<endl<<"Nie masz za duzo kolegow prawda?";
    }

    cout<<endl<<"Troche to przykre ;<";


    return 0;
}
